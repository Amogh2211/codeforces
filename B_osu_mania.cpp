// Author: πα

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    std::vector<int> res;
    
    for (int i = 0; i < n; ++i){
        std::string s;
        cin >> s;
        // cerr << s << '\n';
        for (int i = 0; i < 4; ++i){
            if(s[i] == '#')
                res.push_back(i + 1);
        }
    }

    for (int i = n - 1; i >= 0; --i){
        std::cout << res[i] << ' ';
    }
    std::cout << '\n';

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
