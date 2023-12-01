// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

long func(long x){
    long curr = 1;
    while (curr <= x)
    {
        curr *= 2;
    }
    return curr;
}

void solve()
{
    int n;
    cin >> n;
    cout << n << '\n';
    vector<long> vec(n);
    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }

    for (int i = 0; i < n; ++i){
        cout << i + 1 << ' ' << func(vec[i]) - vec[i] << '\n'; 
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
