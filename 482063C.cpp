// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector <int>> vec(n, vector<int>(m));

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> vec[i][j];
        }
    }

    for (int i = 0; i < n; ++i){
        sort(vec[i].begin(), vec[i].end());
    }

    for (int i = 0; i < m; ++i){
        
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
