/*2.Remove Duplicates Using a Hash Set
   Students register for a technical fest through an online form. Some students submit
   the form multiple times, resulting in duplicate roll numbers in an unsorted list.
   Given an unsorted list of roll numbers, remove duplicates while preserving the order
   of the first occurrence of each roll number.
   Input: An unsorted list of n roll numbers that may contain duplicates.
   Output: A new list containing each roll number exactly once, in the order of its first
   appearance.
   Constraint: 1 ≤ n ≤ 105
*/
#include <iostream>
using namespace std;
int main() {
    int nums[] = {1, 2, 2, 3, 1, 4};
    int n = 6;
    for (int i = 0; i < n; i++) {
        bool duplicate = false;
        for (int j = 0; j < i; j++) {
            if (nums[i] == nums[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
            cout << nums[i] << " ";
    }
    return 0;
}