// Author: yeeter

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    std::vector<string> vec;
    for (int i = 0; i < 3; ++i){
        string s; cin >> s;
        vec.push_back(s);
    }
    std::cout << vec[0][0]<< vec[1][0]<< vec[2][0] << '\n';
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
