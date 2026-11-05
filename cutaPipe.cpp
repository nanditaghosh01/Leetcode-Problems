#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxPieces(int n, vector<int>& cuts) {
    int INF = -1000000;
    vector<int> dp(n + 1, INF);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int c : cuts) {
            if (c <= i && dp[i - c] != INF)
                dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }
    if (dp[n] == INF)
        return -1;
    return dp[n];
}
int main() {
    int n = 9;
    vector<int> cuts = {5, 3, 2};
    cout << "Maximum pieces: "<< maxPieces(n, cuts);
    return 0;
}