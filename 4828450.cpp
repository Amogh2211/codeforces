// Author: #############

#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define long int64_t
#define x first
#define y second


void fillPrefixSum(vector<int> arr, int n, long prefixSum[]) 
{ 
    prefixSum[0] = arr[0]; 
    for (int i = 1; i < n; i++) 
        prefixSum[i] = prefixSum[i - 1] + arr[i]; 
} 
  
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    
    vector<int> vec(n + 1);
    for (int i = 1; i < n + 1; ++i){
        cin >> vec[i];
    }
    // cerr << vec[0] << '\n';
    sort(vec.rbegin(), vec.rend() - 1);

    long prefixsum[n + 1];
    fillPrefixSum(vec, n + 1, prefixsum);
    for (int i = 0; i < n + 1; ++i){
       // cerr<< prefixsum[i] << ' ';
    }
    // cerr <<'\n';
    for (int i = 0; i < q; ++i){
        int res = 0,x, y;
        cin >> x >> y;
        cout << prefixsum[x] - prefixsum[x - y] << '\n';
    }
    return 0;
}
