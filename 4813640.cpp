// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n, m , k;
    cin >> n >> m >> k;

    int x_init, y_init;
    cin >> x_init >> y_init;


    string result = "YES\n";
    for (int i = 0; i < k; ++i){
        int x_curr, y_curr;
        cin >> x_curr >> y_curr;

        if((x_init+y_init) % 2 == (x_curr + y_curr) % 2){
            result = "NO\n";
        }
    }
    cout << result;
    
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
