#include <iostream>
#include <stack>
#include <string>
using namespace std;
int firstMismatch(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{')
            st.push(ch);
        else {
            if (st.empty())
                return i;
            char top = st.top();
            st.pop();
            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return i;
            }
        }
    }
    if (!st.empty())
        return s.length();
    return -1;
}
int main() {
    string s = "{[(])}";
    cout << "First wrong bracket index: "<< firstMismatch(s);
    return 0;
}

