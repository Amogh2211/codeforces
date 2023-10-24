// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int sum_digits(int a){
    int sum = 0;
    while(a > 0){
        sum += a % 10;
        a = a/10;
    }
    return sum;
}

void solve()
{
    int x , k;
    cin >> x >> k;

    while(sum_digits(x) % k){
        x++;
    }

    cout << x << '\n';

    
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
