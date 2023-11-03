// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;

    vector<vector <int>> vec(n, vector<int>(3));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < 3; ++j){
            cin >> vec[i][j];
        }
    }

    int sumx = 0, sumy = 0, sumz = 0;
    for (int i = 0; i < n; ++i){
        sumx += vec[i][0];
    }

    for (int i = 0; i < n; ++i){
        //cout << vec[i][1] << '\n';
        sumy += vec[i][1];
    }
    
    for (int i = 0; i < n; ++i){
        sumz += vec[i][2];
    }

    if(!(sumx or sumz or sumy))
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}
