// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    
    string s = to_string(n);

    for (int i = 1; i < (int)s.size(); ++i){
        string a = s.substr(0, i);
        string b = s.substr(i);

        if (a[0] != '0' && b[0] != '0' && stoi(b) > stoi(a)) {
            cout << std::stoi(a) << ' ' <<  std::stoi(b) << '\n';
            return;
        }
    }

    cout << - 1 << '\n';

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
