// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    int a = 0, b;
    int ans;
    vector<pair<int, int>> temp; 
    for (int i = 1; a < n/2; i++){
        a++;
        b = n - a;
        //cout << a << '\n';
        //cout << b << '\n';
    
        temp.push_back({lcm(a, b), a});
    }

    sort(temp.begin(), temp.end());

    ans = temp.begin()->second;

    cout << ans << ' '<< n - ans << '\n';

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
