// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;

    int sum = a + b + c;

    if(min({a,b,c}) >= (sum / 9) && (sum % 9 == 0)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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
