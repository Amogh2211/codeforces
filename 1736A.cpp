// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n, sum;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; ++i){
        cin >> b[i];
        sum -= b[i];
    }

    int ans = 0;
    
    for (int i = 0; i < n; ++i){
        ans += (a[i] ^ b[i]);
    }

    ans = min(ans, 1 + abs(sum));
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
