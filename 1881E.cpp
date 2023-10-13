// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<long> vec;
    int el;
    for(int i =0; i < n; i++){
        cin >> el;
        vec.push_back(el);
    } 
    int rem = 0;
    for(int i = 0; i < n; i++){
        if(vec.size() > vec[0])
            i += vec[0];
            rem = vec.size() - vec[0];
        //else if()
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
