// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t


int sum_digits(int a){
    int sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a = a / 10; 
    }
    return sum;
}

void solve()
{
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << ' ' << 0 << '\n';
        return;
    }
    int x = 1, y = n - x;
    //cout << y << '\n';
    //int s1 = sum_digits(y);
    //cout << n << ' ' <<  y << ' ' << s1 << '\n';

    for (int i = 0; i < n/2; ++i){
        int  y = n - x, s1 = sum_digits(x), s2 = sum_digits(y);
        if(abs(s1 - s2) <= 1){
            cout << y << ' ' << x << '\n';
            return;
        }
        x++;
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
