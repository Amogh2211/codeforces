// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(2 * n + 2);
    for (int i = 0; i < n; ++i){
        int d;
        cin >> d;
        vec[d]++;
    } 

    int res = 0;
    for (int s = 1; s <= 2*n; ++s){
        int count = 0;
        for (int i = 0; i < s; ++i){
            count += min(vec[i], vec[s-i]);
        }
        res = max(res, count/2);
    }

    cout << res << endl;
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
