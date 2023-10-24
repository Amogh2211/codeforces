// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define long int64_t

void solve()
{
    string a, b;
    cin >> a >> b;
    bool res = false;
    for (unsigned int i = 0; i + 1 < a.length()  ; ++i){
        if((a[i] == b[i] and a[i] == '0') and (a[i+1] == b[i+1] and a[i+1] == '1'))
            res = true;
    }
    if(res)
        cout << "YES\n";
    else
        cout << "NO\n";
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
