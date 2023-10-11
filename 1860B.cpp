// Author: πα

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define long int64_t

void solve()
{
    int m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;
    int curr_amt = 0;
    while ((m - curr_amt) <= k)
    {
        curr_amt += k;
        cout << curr_amt << endl;
    }
    
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
