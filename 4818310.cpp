// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    
    int x = 0, y = 0 , z = 0;

    if (n == 1 || n == 4 || n == 2){
        cout << -1 << '\n';
        return;
    }

    if(n%3 == 0){
        cout << n / 3 << ' ' << 0 << ' ' << 0 << '\n';
        return;
    }

    if(n % 3 == 1){
        cout << (n - 7)/3 << ' ' << 0 << ' ' << 1 << '\n';
        return;
    }

    if(n % 3 == 2){
        cout << (n - 5)/3 << ' ' << 1 << ' ' << 0 << '\n';
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
