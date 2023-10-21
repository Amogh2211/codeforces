// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    string vec;
    cin >> vec;
    

    int starting_zero = 0, ending_one = 0;

    for (int i = 0; i < n; ++i){
        if(vec[i] == '0')
            starting_zero += 1;
        else
            break;
    }
    for (int i = n-1; i >= 0; --i){
        if(vec[i] == '1')
            ending_one += 1;
        else
            break;
    }

    for (int i = 0; i < starting_zero; ++i){
        cout << '0';
    }

    if(!(starting_zero + ending_one == n)){
        cout << '0';
    }

    for (int i = 0; i < ending_one; ++i){
        cout << '1';
    }
    cout << '\n';
    
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
