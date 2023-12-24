// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    
    string s = to_string(n);

    int temp = 0;
    for (int i = 0; i < (int)s.size() - 1; ++i){
        if(s[i] == '0' and s[i + 1] != '0'){
            temp = i;
            break;
        }
    }

    cerr << temp << ' ';
    if(temp){
        int a = n / , b = 0;

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
