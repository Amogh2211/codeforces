// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> vec1(n), vec2(q);
    for (int i = 0; i < n; ++i){
        cin >>  vec1[i];
    }

    for (int i = 0; i < q; ++i){
        cin >> vec2[i];
    }


    for (int i = 0; i < q; ++i){
        for (int j = 0; j < n; ++j){
            if(vec1[j] % x )
        }
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
