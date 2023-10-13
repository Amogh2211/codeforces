// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cstring>
using namespace std;
#define long int64_t



void solve()
{
    int n, m;
    string x, s;
    cin >> n >> m >> x >> s;
    // std::string::find
    int res = 0;
    while (x.length() < 4 * s.length() or res < 2)
    {
        if (x.find(s) != std::string::npos )
            break;
        x += x, res += 1;
    }
    if (x.find(s) == std::string::npos)
        res = -1;
    cout << res << endl;
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
