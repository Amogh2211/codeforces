// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t
#define N_MAX 150000

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(N_MAX);
    for (int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        vec[temp] += 1;
    }

    if(accumulate(vec.begin(), vec.end(), 0) == n){
        cout << -1 << '\n';
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
