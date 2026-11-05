#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minCoupons(vector<int>& coins, int amount) {
    int INF = 1000000;
    vector<int> dp(amount + 1, INF);
    vector<int> pick(amount + 1, 0);
    dp[0] = 0;
    for (int a = 1; a <= amount; a++) {
        for (int c : coins) {
            if (c <= a && dp[a - c] != INF) {
                if (dp[a - c] + 1 < dp[a]) {
                    dp[a] = dp[a - c] + 1;
                    pick[a] = c;
                }
            }
        }
    }
    if (dp[amount] == INF)
        return -1;
    cout << "Coupons used: ";
    int a = amount;
    while (a > 0) {
        cout << pick[a] << " ";
        a = a - pick[a];
    }
    cout << endl;
    return dp[amount];
}
int main() {
    vector<int> coins = {1, 5, 6};
    int amount = 10;
    cout << "Minimum coupons: "<< minCoupons(coins, amount);
    return 0;
}