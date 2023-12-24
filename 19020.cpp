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

    bool ans = false;

    long num_zeros = 0, num_ones = 0;

    for (int i = 0; i < n; ++i){
        if(s[i] ==  '0')
            num_zeros++;
        else
            num_ones++;
    }

    if(num_zeros> num_ones){
        cout << "YES\n";
        return;
    }


    for (int i = 0; i < n - 1; ++i){
        if(s[i] == '1' and s[i+1] == '0' or ( s[i] == '0' and s[i+1] == '1'))
            ans = true;
        
    }

    if(ans)
        cout << "YES\n";
    else
        cout << "NO\n";
    
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
