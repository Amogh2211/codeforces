// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    long count = 0; 
    for (int i = 0; i < n - 2; ++i){
        if(s[i] == s[i + 2])
            count++;
    }
    
    long res = n - 1 - count;
    cout << res << '\n';
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
