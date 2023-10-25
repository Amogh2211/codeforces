// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n, m;
    cin >> n >> m;

    int area = n * m;
    if(area  % 3){
    cout << (area / 3) + 1 << '\n';
    return;
    }

    cout << (area / 3) << '\n';

    
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
