// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    // top-right -> (x + 1, y + 1)
    // left -> (x - 1, y)

    // need if possible to go to (c,d)
    if(b <= d and c <= a + d - b){
        cout << ((d - b) + (a + d - b - c )) << "\n";
        return;
    }
    else{
        cout << -1 << '\n';
        return;
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
