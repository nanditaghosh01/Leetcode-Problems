/*4.Two Sum Using a Hash Map
   An online shopping portal needs to identify two products whose prices add up exactly
   to a customer’s gift-card balance.
   Given a list of distinct product prices and a target amount, find the indices of two
   prices whose sum equals the target.
   Input: A list of distinct product prices and the target gift-card balance.
   Output: Two indices [i, j] such that
   prices[i] + prices[j] = target.
   Constraints: 2 ≤ n ≤ 104
   . Exactly one valid answer exists.
*/
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int nums[] = {2, 7, 11, 15};
    int n = 4, target = 9;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int need = target - nums[i];
        if (mp.find(need) != mp.end()) {
            cout << "[" << mp[need] << ", " << i << "]";
            return 0;
        }
        mp[nums[i]] = i;
    }
    return 0;
}