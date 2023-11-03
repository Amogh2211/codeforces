// Author: #############

#include <bits/stdc++.h>
#include <string>
#include <unordered_set>
using namespace std;
#define long int64_t

int num_distinct(string s){
    unordered_set<char> use;
    for (int i = 0; i < (int)s.size(); ++i){
        use.insert(s[i]);
    }

    return (int)use.size();
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;


    string substr1, substr2;
    int broke_at = 0, flag = 0;

    for (int i = 0; i < n; ++i){
        if(!(substr1.find(s[i]) == string::npos)){
            broke_at = i;
            flag = 1;
            break;
        }
        substr1 += s[i];
    }

    if(flag == 1)   {
        for (int i = broke_at; i < n; ++i)
            substr2 += s[i] ;

        cout << num_distinct(substr1) + num_distinct(substr2) << '\n';

    }
    cerr << substr1 << '\n' << flag << '\n' << broke_at << '\n';

    if(flag == 0){
        cout << num_distinct(substr1) << '\n';
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
