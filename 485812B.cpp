// Author: #############
#define long int64_t
#include <bits/stdc++.h>
using namespace std;

const int ax  = 2e5 + 10 ;
int n, x, ass[ax], random[ax];

void check_kali(int x){
    int m = 0;
    for (int i = 0; i < n; ++i){
        if(ass[i] != x)
            random[++m] = ass[i];
    }

    for (int i = 0; i < m; ++i){
        if(random[i] != random[m - i])
            return;
    }
    ans = true;
    

}

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }

    if(vec.size() == 1){
        cout << "YES\n";
        return;
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
