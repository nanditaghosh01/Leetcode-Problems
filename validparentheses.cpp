/*5.Valid Parentheses Using a Stack
   An online code editor checks whether brackets are balanced before a student submits
   code.
   Given a string containing the brackets (), [], and {}, determine whether every opening bracket is closed by the same type of bracket in the correct order.
   Input: A string consisting of the brackets ( ) [ ] { }.
   Output: True if all brackets are correctly matched and nested; otherwise, False.
   Constraint: 1 ≤ |s| ≤ 104
*/
#include <iostream>
#include <stack>
using namespace std;
int main() {
    string s = "{[()]}";
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) {
                cout << "False";
                return 0;
            }
            char t = st.top();
            st.pop();
            if ((c == ')' && t != '(') || (c == ']' && t != '[') || (c == '}' && t != '{')) {
                cout << "False";
                return 0;
            }
        }
    }
    cout << (st.empty() ? "True" : "False");
    return 0;
}