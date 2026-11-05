#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxProfit(vector<int>& prices){
    int low = prices[0];
    int best = 0;
    for (int x : prices){
        low = min(low, x);
        int profit = x - low;
        best = max(best, profit);
    }
    return best;
}
int main(){
    vector<int> prices = {9, 4, 7, 2, 8, 5, 6};
    cout << "Maximum Profit: " << maxProfit(prices);
    return 0;
}