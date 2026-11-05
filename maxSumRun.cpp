#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxRun(vector<int>& a){
    int cur = a[0];
    int best = a[0];
    for (int i = 1; i < a.size(); i++){
        cur = max(a[i], cur + a[i]);
        best = max(best, cur);
    }
    return best;
}
int main(){
    vector<int> a = {3, -4, 5, -1, 2, -6, 4};
    cout << "Maximum Sum: " << maxRun(a);
    return 0;
}