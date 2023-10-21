// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t


void solve()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    int count = 0, result;

    for (int i = 0; i < k; ++i){
        if(s[i] == 'W')
            count += 1;
    }
    result = count;

    for (int i = k; i < n; ++i){
        if(s[i] == 'W') count++;
        if(s[i-k] == 'W') count--;
        result = min(result, count);
    }
    

    cout << result << '\n';   
    
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
