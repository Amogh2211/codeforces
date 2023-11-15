// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> vec;
    
    for (int i = 0; i < n; ++i){
        if(s[i] == '2')
            vec.push_back(i);
    }


    int k = vec.size();
    if(k == 1 or k == 2){
        cout << "NO\n";
        return;
    }

    vector<string> out_str(n, string(n, '='));

    for (int i = 0; i < n; ++i) {
        out_str[i][i] = 'X';
    }

    for (int i = 0; i < k; ++i){
        int x = vec[i], y = vec[(i + 1) % k];
        out_str[x][y] = '+';
        out_str[y][x] = '-';
    }
    cout << "Yes\n";
    for (int i = 0; i < n; ++i){
        cout << out_str[i] << '\n';
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
