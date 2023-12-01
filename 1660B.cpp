// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i){
        cin >>  vec[i];
    }
    string res = "YES\n";

    if(vec.size() == 1){
        if(vec[0] > 1)
            res = "NO\n";
    }
    else{
        sort(vec.begin(), vec.end());

        if(vec[n - 2] + 1 < vec[n-1])
            res = "NO\n";

    }
    cout << res;
    
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
