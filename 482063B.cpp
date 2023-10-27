// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

#define x first
#define y second


void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<pair <int,int>> vec(n);    
    for (int i = 0; i < n; ++i){
        cin >> vec[i].x >> vec[i].y;
    }

    long ans = llabs(vec[a -1].x - vec[b - 1].x) +  llabs(vec[a - 1].y - vec[b - 1].y) ;
    // cout << "direct is: " << ans << '\n';
    // you have to maximize the number fo major cities the person passes through
    // if this person goes through so many, just find the two that are closest to eact of the cities (dept, arrival)
    // that would give minimum ans
    // if no major cities, just a -> b gives ans
    // test cases are weird so have to use long max to narrow down on closest 

    long major1 = LLONG_MAX / 2, major2 = LLONG_MAX / 2;

    for (int i = 0; i < k; ++i){
        major1 = min(major1, ((long)abs(vec[a -1].x - vec[i].x) + (long)abs(vec[a - 1].y - vec[i].y)));
        // cout << major1 << ' ';
        major2 = min(major2, ((long)abs(vec[b - 1].x - vec[i].x) + (long)abs(vec[b - 1].y - vec[i].y)));
       // cout << major2 << ' ' << '\n';
    
    }

    ans = min(ans, major1 + major2);
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
