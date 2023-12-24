// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t


void solve()
{
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;

    set<pair<int, int>> s1, s2;

    s1.insert({xk + a, yk + b}); s1.insert({xk + a, yk - b}); s1.insert({xk - a, yk + b}); s1.insert({xk - a, yk - b});
    s1.insert({xk + b, yk + a}); s1.insert({xk + b, yk - a}); s1.insert({xk - b, yk + a}); s1.insert({xk - b, yk - a});

    s2.insert({xq + a, yq + b}); s2.insert({xq + a, yq - b}); s2.insert({xq - a, yq + b}); s2.insert({xq - a, yq - b});
    s2.insert({xq + b, yq + a}); s2.insert({xq + b, yq - a}); s2.insert({xq - b, yq + a}); s2.insert({xq - b, yq - a});
    
    int ans = 0;

    for (auto x : s1){
        if(s2.find(x) != s2.end())
            ans++;
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
