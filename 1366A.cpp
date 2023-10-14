// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int a, b;
    cin >> a >> b;
    int res =  0;

    if (a == 0 || b == 0){
        cout << 0 << endl;
        return;
    }


    if (a > b){
        swap(a,b);
    }
    
    if( b > 2 * a){
        cout << a << endl;
        return;
    }

    cout << res + (a + b) / 3 << endl;  

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
