// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    long n, m;
    cin >> n >> m;
    vector<long> a(n + m);
    for (long i = 0; i < n + m; ++i){
        cin >> a[i];
    }

    sort(a.begin(), a.end() - 1);
    reverse(a.begin(), a.end());

    
    long sum = 0;
    for (long i = 0; i < n; ++i){
        sum += a[i];
    }

    cout << sum << '\n';

    
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
