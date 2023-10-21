// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int num_ones = 0, num_zeros = 0;
    int res;
    // int pairs = 0;

    for (int i = 0; i < n; ++i){
        if(vec[i] == 0)
            num_zeros += 1;
    }

    num_ones = n - num_zeros;

    cout << num_ones << ' ' << num_zeros << '\n';
    
    if(num_ones == num_zeros){
        res = num_ones * (num_ones - 1) + 1;
        cout << res << '\n';
        return;
    }

    if(num_ones < num_zeros){
        num_ones += 1;
        res = num_ones * (num_ones - 1) + 1;
        if(num_ones == 1){
            cout << num_zeros - 1 << '\n';
            return;

        }
        cout << res << '\n';
        return;
    }
    else{
        num_zeros++;
        res = num_zeros * (num_zeros - 1) + 1;
        if(num_zeros == 1){
            cout << num_ones - 1 << '\n';
            return;

        }
        cout << res << '\n';
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
