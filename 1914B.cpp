// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n, k;
    cin >> n >> k;

    for (int i = n - k; i >= 1; --i){
        cout << i << ' ';
    }

    for (int i = n - k + 1; i <= n; ++i){
        cout << i << ' ';
    }

    cout << '\n';
    
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
