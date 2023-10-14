// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    long n, k;
    cin >> n >> k;

    if (n < k * k){
        cout << "NO" << '\n';
        return;
    }
    n -= k * k;
    if(n % 2 == 0){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
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
