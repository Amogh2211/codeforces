// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    string a, b;
    cin >> a >> b;

    int len_a = a.size(), len_b = b.size(), ans = 0;

    for (int len = 1; len <= min(len_a,len_b); ++len){
        for (int i = 0; i + len <= len_a; ++i){
            for (int j = 0; j + len<= len_b; ++j){
                if(a.substr(i, len) == b.substr(j, len))
                    ans = max(ans, len);
            }
        }
    }

    cout << len_a + len_b - 2 * ans << '\n';

    
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
