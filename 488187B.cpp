// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    map<int, int> m;
    long ans = 0;
    for (int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        temp -= i;
        ans += m[temp];
        m[temp]++;
    }
    cout << ans << '\n';
    
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
