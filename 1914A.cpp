// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(26);
    for (int i = 0; i < n; ++i){
        char  temp;
        cin >> temp;
        vec[(int)temp - 'A'] += 1;
    }

    int res = 0;
     
    for (int i = 0; i < (int)vec.size(); ++i){
        if(vec[i] >= i + 1)
            res++;
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
