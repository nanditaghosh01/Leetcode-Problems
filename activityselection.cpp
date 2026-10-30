/*2.Activity Selection (Greedy Algorithm)
Given the following activities with their start and finish times, select
the maximum number of non-overlapping activities using the Greedy
Algorithm.
Activity A1 A2 A3 A4 A5 A6
Start 1 3 0 5 8 5
Finish 2 4 6 7 9 9
*/
#include <iostream>
using namespace std;
int main() {
    int start[] = {1, 3, 0, 5, 8, 5};
    int finish[] = {2, 4, 6, 7, 9, 9};
    int n = 6;
    int last = 0;
    cout << "A1 ";
    for (int i = 1; i < n; i++) {
        if (start[i] >= finish[last]) {
            cout << "A" << i + 1 << " ";
            last = i;
        }
    }
    return 0;
}