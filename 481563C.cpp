// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), a1(n);

    for (int i = 0; i < n; ++i){
        cin>> a[i];
    }
    for (int i = 0; i < n; ++i){
        cin>> a1[i];
    }
    int left = 0, right = 0, flag = 0;
    for (int i = 0; i < n; i++){
        if(a[i] != a1[i]){
            right = i;
            if(left == 0)
                left = i;
        }
    }

    while(left > 0 and (a1[left - 1] <= a1[left]))
        left--;
    while(right < n - 1 and a1[right + 1] >= a1[right])
        right++;



    cout << left + 1<< ' ' << right + 1 << '\n';
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
