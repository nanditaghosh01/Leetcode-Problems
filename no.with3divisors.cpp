#include <iostream>
#include <vector>
using namespace std;
const int LIMIT = 1000000;
vector<bool> sieve() {
    vector<bool> isPrime(LIMIT + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= LIMIT; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= LIMIT; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}
bool hasThreeDivisors(long long x, vector<bool>& isPrime) {
    long long r = 0;
    while ((r + 1) * (r + 1) <= x)
        r++;
    while (r * r > x)
        r--;
    return (r * r == x && isPrime[r]);
}
int main() {
    vector<long long> nums = {
        9, 12, 25, 36, 121, 1, 999966000289LL
    };
    vector<bool> isPrime = sieve();
    cout << "Results: ";
    for (long long x : nums) {
        if (hasThreeDivisors(x, isPrime))
            cout << "True ";
        else
            cout << "False ";
    }
    return 0;
}