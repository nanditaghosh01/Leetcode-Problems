#include <iostream>
#include <vector>
using namespace std;
vector<int> countBits(int n){
    vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; i++)
        dp[i] = dp[i >> 1] + (i & 1);
    return dp;
}
int main() {
    int n = 5;
    vector<int> result = countBits(n);
    cout << "Number of 1-bits: ";
    for (int x : result)
        cout << x << " ";
    return 0;
}