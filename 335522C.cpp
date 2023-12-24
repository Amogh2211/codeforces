// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    string s,t;
    cin >> n >> s >> t;

    string ans = "NO\n";
    int check = 0;

    for (int i = 0; i < n; ++i){
        if(s[i] != t[i] and t[i] != 'o')
            check++;
    }

    int o = count(t.begin(), t.end(), 'o');

    // aabso
    // ooasm

    // num diffs should be num o's in second
    if(check == o)
        ans = "YES\n";

    cout << ans;

    
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
