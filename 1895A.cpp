// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int x , y , k;
    cin >> x >> y >> k;

    if(x - y >=0){
        cout << x << '\n';
        return;
    }

    long time = 0;
    if(k >= abs(y - x)){
        time = y;
    }
    else{
        int closest = x + k;
        time += (closest) + 2 * (y - closest);
        //cerr << closest << ' ';
    }

    cout << time << '\n';   
    
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
