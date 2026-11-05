#include <iostream>
using namespace std;
const long long MOD = 1000000007;
long long kthSpecial(long long n, long long k) {
    long long ans = 0;
    long long power = 1;
    while (k > 0) {
        if (k & 1)
            ans = (ans + power) % MOD;
        power = (power * n) % MOD;
        k = k >> 1;
    }
    return ans;
}
int main() {
    long long n = 3;
    long long k = 5;
    cout << "K-th special number: "<< kthSpecial(n, k);
    return 0;
}