/*1.Single Number (Bit Manipulation)
   An office RFID gate logs every employee twice: once when entering and once when
   leaving. However, one employee’s ID appears only once.
   Given a list of n employee IDs in which every ID appears exactly twice except one,
   find the ID that appears only once.
   Input: A list of n employee IDs, where n is odd.
   Output: The ID that appears only once.
   Constraint: 1 ≤ n ≤ 3 × 104
*/

#include <iostream>
using namespace std;
int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int n = 5;
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans ^= nums[i];
    cout << ans;
    return 0;
}