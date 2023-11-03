// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

#define x first
#define y second

void solve()
{
    int n, l ,r ;
    cin >> n >> l >> r;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    long res = 0;
    
    // check for aj >= l - ai first
    
    for (int i = 0; i < n; ++i){
        auto upper1 = lower_bound(vec.begin()  + i + 1, vec.end(), l - vec[i]);
        auto upper2 = upper_bound(vec.begin()  + i + 1, vec.end(), r - vec[i]);
        res += upper2 - upper1;
    }

    cout << res <<'\n';

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
