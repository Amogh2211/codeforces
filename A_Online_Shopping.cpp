// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n, s, k;
    cin >> n >> s >> k;
    long pay = 0, ans = 0;
    pair<int, int> p;
    for (int i = 0; i < n; ++i){
        cin >>  p.first >> p.second;
        pay += p.first * p.second;
    }

    if(pay >= s)
        ans = pay;
    else
        ans = pay + k;

    cout << ans;
    return 0;
}
