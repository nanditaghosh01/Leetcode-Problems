/*3.Binary Search in a Descending Array
   A gaming leaderboard stores player scores in descending order. Your task is to find
   the index of a given target score efficiently.
   Given a descending-sorted array of distinct scores and a target score, return its index
   if it exists; otherwise, return −1.
   Input: An array of distinct scores sorted from highest to lowest and a target score.
   Output: The index of the target score, or −1 if it is not present.
   Constraint: 1 ≤ n ≤ 106--------
*/
#include <iostream>
using namespace std;
int main() {
    int nums[] = {10, 7, 5, 3, 1};
    int n = 5, target = 5;
    int l = 0, r = n - 1;
    int ans = -1;
    while (l <= r){
        int mid = l+ (r - l) / 2;
        if (nums[mid] == target){
            ans = mid;
            break;
        }else if (nums[mid] < target)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout<<ans;
    return 0;
}