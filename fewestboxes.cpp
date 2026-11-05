#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int fewestBoxes(vector<int>& c) {
    int total = 0;
    int mine = 0;
    int k = 0;
    for (int x : c)
        total += x;
    sort(c.rbegin(), c.rend());
    for (int x : c) {
        mine += x;
        k++;
        if (mine > total - mine)
            return k;
    }
    return k;
}
int main() {
    vector<int> c = {4, 1, 3, 2, 2};
    cout << "Minimum boxes: " << fewestBoxes(c);
    return 0;
}