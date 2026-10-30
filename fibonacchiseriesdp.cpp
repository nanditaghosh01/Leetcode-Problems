/*1.Fibonacci Series (Dynamic Programming)
Given an integer n, generate the first n terms of the Fibonacci series
using Dynamic Programming.
Input: n = 7
Output: 0, 1, 1, 2, 3, 5, 8
*/
#include <iostream>
using namespace std;
int main(){
    int n = 7;
    int dp[10];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    for (int i = 0; i < n; i++)
        cout << dp[i] << " ";
    return 0;
}
