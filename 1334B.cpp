// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    long n, x;
    cin >> n >> x;
    vector<long> burles(n);
    for (int i = 0; i < n; ++i){
        cin >> burles[i];
    }

    std::sort(burles.begin(), burles.end());
    std::reverse(burles.begin(), burles.end());

    int t = 0;

    // Case 1: None of the civilians have money that can come up to x
    if(*burles.begin() < x){
        cout << 0 << '\n';
        return;
    }

    // Every other case

    long temp = 0;
    for (int i = 0; i < n; ++i){
        temp += burles[i];
        // cout << temp << " " << "i = " << i << " ";
        float avg = (float)(temp) / (float)(i+1);
        // cout << avg << " ";
        if(avg < x)
            break;
        t += 1; 
    }

    cout << t << '\n';
    
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
