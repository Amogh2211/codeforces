// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    if(s.size() == 1)
        cout << 0 << '\n';

    // Two pointer?? Maybe?????? 
    // If we are some letter (from a - z), go from left and right and see if you can form a palindrome automatically (based on whatever the string already has)
    // if not, yeet something and see
    // That doesnt make sense
    // what is life anymore
    //aaaa/aaa/aaaa/aaa/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a/a//aa/
    
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
