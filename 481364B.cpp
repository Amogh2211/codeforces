// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);
    
    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }
    int count = 0;
    string ans = "YES";

    if(vec[0] == vec[n-1]){
        for (int i = 1; i < n - 1; ++i){
            if(vec[0] == vec[i])
                count++;
        }
    // cout << count << '\n';
        if(!(count == (k-2)))
            ans == "NO";

        cout << ans << '\n';

        return;
    }

    
    int left = 0, right = n - 1, count_left = 0, count_right = 0, where_k_from_left = 0, where_k_from_right = 0 ;
    for (int i = 0; i < n; ++i){
        if(vec[left] == vec[0]){
            count_left++;
        }
        if(count_left == k){
            where_k_from_left = left;
        }
        if(vec[right] == vec[n-1])
            count_right++;  
        if(count_right == k){
            where_k_from_right = right;
        }
        left++;
        right--;
    }
    if(where_k_from_left > where_k_from_right)
        ans = "NO";

    cout << ans << '\n';    
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
