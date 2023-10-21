// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    
    vector<vector<int>> vec(n, vector<int>(n));

    if(n % 2){
        for (int i = 0; i < n; ++i){
            vec[i][i] = 1;
            vec[n-i - 1][i] = 1;
        }
        vec[0][(n-1)/2] = 1;
        vec[(n-1)/2][0] = 1;
    }
    else{
        for (int i = 0; i < n; ++i){
                vec[i][i] = 1;
                vec[n-i-1][i] = 1;
        }
    }


    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cout << vec[i][j] << ' ';
        }
        cout << '\n';
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
