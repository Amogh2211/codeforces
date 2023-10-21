// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t





void solve()
{
    int n;
    cin >> n;
    
    int a,b,c;

    c = 1;
    a = 2;
    for(int i = 1; i <= n; i++){  
        //cout << a << '\n';
        b = n - a - 1;
        //cout << b << '\n';
        
        if(gcd(a,b) == c){
            //cout << a << '\n';
            b = n - a - 1;
            // cout << b << '\n';
            break;
        }
        else
            a++;
    }

    cout << a << ' ' << n - a - 1 << ' ' << c << '\n';
    
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
