// Author: yeeter

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> vec;
    for (int i = 0; i < n; ++i){
        vector<int> temp;
        for (int j = 0; j < n; ++j){
            int x; cin >> x;
            temp.push_back(x);
        }
        vec.push_back(temp);
    }

    int targetSum = (2*n * (2 * n + 1)) / 2;
    vector<int> result;
    result.push_back(0);
    int currSum = 0;

    for (int i = 0; i < n; ++i)
    {
        currSum+= vec[0][i];
        result.push_back(vec[0][i]);
    }

    for (int i = 1; i < n; ++i)
    {
        result.push_back(vec[n-1][i]);
        currSum+= vec[n-1][i];
    }
    
    result[0] = targetSum - currSum;
    for (int i = 0; i < result.size(); ++i){
         std::cout << result[i] << ' ';
    }
    std::cout << '\n';
    
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
