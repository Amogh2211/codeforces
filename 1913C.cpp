// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t


int find(vector<long>& ms, int target){
    int n = ms.size();
    vector<vector<bool>> dp(n + 1, vector<bool> (target + 1 , false));

    for (int i = 0; i < n; ++i){
        dp[i][0] = true;
    }

    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= target; ++j){
            if(ms[i - 1] > j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i - 1][j] or dp[i - 1][j - ms[i - 1]];
            }
        }
    }

    return dp[n][target];
}


int main()
{
    int n;
    cin >> n;
    vector<long> ms;

    for (int i = 0; i < n; ++i){
        int a, b;
        cin >> a >> b;

        if(a == 1){
            ms.push_back(pow(2, b));
        }
        if(a == 2){
            if(find(ms, b)){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}
