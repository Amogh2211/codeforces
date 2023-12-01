// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n,a ,b;
    cin >> n >> a >> b;

    if(a <= n / 2 and b <= n / 2){
        cout << -1 << '\n';
        return;
    }

    vector<long> vec;
    vec.push_back(a);
    for (int i = n; i > 0; --i){
        if( i != a and i!= b) vec.push_back(i);
    }
    for (int i = 0; i < (int)vec.size(); ++i){
        cerr << vec[i] << ' ';
    }

    if()


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
