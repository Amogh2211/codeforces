// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);
    vector<pair<int,int>> b;

    for (int i = 0; i < n; ++i){
        cin >> vec[i];
        if(vec[i] > k ){
            vec[i] = vec[i] % k;
            if(vec[i] == 0) 
                vec[i] += k;
        }
        b.emplace_back(vec[i] , -i);
    }

    sort(b.rbegin(), b.rend());
    for(auto& it : b)
        cout << -it.second + 1 << ' ' ;
    cout << '\n';
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
