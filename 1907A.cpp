// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    string s;
    cin >> s;
    vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

    int spot = (int)s[1] - '0';
    cerr << spot;

    for (int i = 1; i <= 8; ++i){
        if(i == spot)
            continue;
        else
            cout << s[0] << i << '\n';
    }
    for(auto i : vec){
        if(i == s[0])
            continue;
        else
            cout << i << spot << '\n';
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
