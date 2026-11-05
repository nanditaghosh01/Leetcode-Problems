#include <iostream>
#include <string>
using namespace std;
int goodWindows(string s) {
    int count = 0;
    for (int i = 0; i < s.length() - 2; i++){
        char a = s[i];
        char b = s[i + 1];
        char c = s[i + 2];
        if (a != b && b != c && a != c)
            count++;
    }
    return count;
}
int main(){
    string s = "abcabbca";
    cout << "Good Windows: " << goodWindows(s);
    return 0;
}