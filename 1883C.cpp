// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }

    for (int i = 0; i < n; ++i){
        if((vec[i] % k) == 0){
            cout << 0 << '\n';
            return;
        }
    }

    int res = INT_MAX;

    if(k == 4){
        int count_even = 0, count_odd = 0, res1 = 0, res2 = 0, res3 = 0;
        for (int i = 0; i < n; ++i){
        res = min(abs((vec[i] % k) - k), res);
    }

        for (int i = 0; i < n; ++i){
            if(vec[i] % 2){
                count_odd++;
            }
            else{
                count_even++;
            }        
        }
        if(count_even == 1){
            res1 = 1;
        }
        if(count_even >= 2){
            res2 = 0;    
        }
        else{
            res3 = 2;
        }
        res = min({res, res1,res2, res3});
    }

    for (int i = 0; i < n; ++i){
        res = min(abs((vec[i] % k) - k), res);
        //cout << res << '\n';
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
