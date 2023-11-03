// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t


void solve()
{
    int n, res  = 0;
    cin >> n;
    vector<int> mags(n);
    string lids;
    cin >> lids;
    
    for (int i = 0; i < n; ++i){
        cin >> mags[i];
        // cout << mags[i] << ' ';
    }

    for (int i = 0, j = -1; i < n; ++i){
            if(lids[i] == '0'){
                j = i;
            }

            else if(j >= 0 and mags[i] < mags[j]){
                swap(lids[i], lids[j]);
                j = i;
            }
        }

    for (int i = 0; i < n; ++i){
        if(lids[i] == '1') res += mags[i];
    }

    // for (int i = 0; i < n; ++i){
    //     if(lids[i] == '1')
    //         res += mags[i];
    // }

    cout << res << '\n';
    // cout << "result = " << res << '\n' ;

    // for (int i = 0; i < n; ++i){
    //     int  flag = 0, flag2 = 0;
    //     if(lids[i] == '0'){
    //         if(mags[i - 1] > mags[i]){
    //             lids[i - 1] = '1';
    //             flag2 = 1;
    //         }
    //         cout << flag2 << '\n';
    //     }
    // }
    // cout << lids << '\n';



   

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
