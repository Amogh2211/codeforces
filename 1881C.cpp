// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t
#define all(arr) arr.begin(), arr.end()

void solve()
{
    int n;
    cin >> n;
    vector<string> vec(n);

    for(int i = 0; i < n; ++i){
        cin >> vec[i];
    }
    int res = 0;

    for (int i = 0; i * 2 < n; ++i){

        for( int j = 0; j * 2 < n; ++j){ 

            vector<char> temp {vec[i][j], vec[n-1-j][i], vec[n-1-i][n-1-j], vec[j][n-1-i]};
            char max_Char = *max_element(all(temp));
            for(char e : temp)
                res += max_Char - e; 
            // cout << res << endl;
        }
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

