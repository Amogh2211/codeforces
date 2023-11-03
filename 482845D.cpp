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
        cin >> vec[i];
    }

    if(n == 1)
        cout << 0 << '\n';

    int l = 0, r = n - 1;

    if((vec[0] + vec[n-1]) % 2){
        vec[n - 1] = vec[0];
    }
    else{
        vec[0] = vec[n - 1];
    }
    cout << 0 << ' ' << n - 1 << '\n';

    for (int i = 1; i < n; ++i){
        if((vec[i] + vec[1]) % 2){
            vec[i] = vec[1];
            cout << 1 << ' ' << i << '\n';
        }
        else{
            vec[i] = vec[n];
            cout << i << ' ' << n << '\n';
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
