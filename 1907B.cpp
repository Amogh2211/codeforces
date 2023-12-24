// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    string s;
    cin >> s;
    stack<char> stack;
    for (char c : s) {
        if (islower(c)) {
            if (!stack.empty() && islower(stack.top())) {
                stack.pop();
            } else {
                stack.push(c);
            }
        } else if (isupper(c)) {
            if (!stack.empty() && isupper(stack.top())) {
                stack.pop();
            } else {
                stack.push(c);
            }
        } else {
            stack.push(c);
        }
    }

    string result = "";
    while (!stack.empty()) {
        result = stack.top() + result;
        stack.pop();
    }
    cout << result << '\n';
    
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
