// Author: #############

#include <bits/stdc++.h>
using namespace std;
#include <string>
#define long int64_t

void solve()
{
    string s;
    cin >> s;
    
    string t;

    for (int i = 0; i < (int)s.size(); ++i){
        t += '(';
        t += ')';
    }

    if(t.find(s) == string::npos){
        cout << "YES\n" << t << '\n';
        return;
    }
    t = string((int)s.size(), '(') + string((int)s.size(), ')');
    if(t.find(s) == string::npos){
        cout << "YES\n" << t << '\n';
        return;
    }

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
