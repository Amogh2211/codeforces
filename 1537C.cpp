// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> mountain(n);
    for (int i = 0; i < n; ++i){
        cin >> mountain[i];
    }

    sort(mountain.begin(), mountain.end());

    if(mountain.size() == 2){
        cout << mountain[0] << " " << mountain[1] << endl;
        return;
    }

    int x = -1, mn = INT_MAX;

    for (int i = 0; i < n; ++i){
        if((mountain[i] - mountain[i-1]) < mn){
            mn = mountain[i] - mountain[i-1], x = i;
        }
    }

    for (int i = 0; i < n; ++i){
        cout << mountain[(i+x) % n] << ' ';
    }
    cout << endl;
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
