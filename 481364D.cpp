// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> vec(n, vector<int>(m));

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> vec[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n - 1; ++i){
        cout<< "row is: " << i << '\n';
        for (int j = 0; j < m; ++j){
            sum += abs(vec[i][j] - vec[i+1][j]);
            cout << sum << '\n';
        }        
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
