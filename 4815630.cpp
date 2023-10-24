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
    
    // cout << sum;
    // THe only way that a subarray is close if they have 0 or 1 as elements. So if we get number of 0s and 1s
    // number of ways to remove 0s would be 2^(num_zeros) and number of 1s would just be count_ones
    // for all permutations of the subarrays, just multiply???

    long num_ones = 0, num_zeros = 0;
    for (int i = 0; i < n; ++i){
        if(vec[i] == 1)
            num_ones++;
        if(vec[i] == 0)
            num_zeros++;
    }
    // cout << num_ones << ' ' << num_zeros<< '\n';

    long res = pow(2, num_zeros) * num_ones;
    cout << res << '\n';
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
