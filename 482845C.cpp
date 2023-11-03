// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void fillPrefixSum(vector<int> arr, int n, long prefixSum[]) 
{ 
    prefixSum[0] = arr[0]; 
    for (int i = 1; i < n; i++) 
        prefixSum[i] = prefixSum[i - 1] + arr[i]; 
} 


void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> step_height(n), leg_height(q);
    for (int i = 0; i < n; ++i){
        cin >> step_height[i];
    }

    for (int i = 0; i < q; ++i){
        cin >> leg_height[i];
    }

    vector<int> min_height;
    min_height.push_back(step_height[0]);

    for (int i = 0; i < n - 1; ++i){
        int temp = max(step_height[i], step_height[i + 1]);
        min_height.push_back(temp);
    }
    
    for (int i = 0; i < q; ++i){
        // auto i =

    }


    for (int i = 0; i < (int)min_height.size(); ++i){
        cerr << min_height[i] << ' '; 
    }

    long prefixsum[n];
    fillPrefixSum(step_height, n, prefixsum);

    for (int i = 0; i < n; ++i){
        //cerr << prefixsum[i] << ' ';
    }

    int max_height = 0;
    // for (int i = 0; i < q; ++i){
    //     for (int j = 0; j < n; ++j){
    //     if(leg_height[i] >= prefixsum[j + 1] - prefixsum[j]){

    //     }
    //     else{
    //         cout << '\n';
    //     }
    //     }
    //     //cout << prefixsum[i + 1] - prefixsum[i] << ' ';
    // }

    // Height to climb is prefixsum[i] - prefixsum[i - 1]




    
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
