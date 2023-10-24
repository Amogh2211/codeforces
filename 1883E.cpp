// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<long> vec(n);
    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }
    int count = 0;
    for (int i = 0; i < n - 1; ++i){
        while(vec[i] > vec[i+1]){
            vec[i+1] = 2LL*vec[i+1];
            count++;
        }
    }
    cout << count << '\n';
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
