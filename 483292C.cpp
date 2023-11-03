// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    multiset<int> s;
    for (int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    int res = 0;

    while(s.size()){
        int x = *s.begin();
        while (s.count(x))
        {
            s.erase(s.find(x));
            x++;
        }
        res += 1;
    }

    cout << res << '\n';
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
