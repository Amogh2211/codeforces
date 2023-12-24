// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    int vec1_even = 0, vec1_odd = 0, vec2_even = 0, vec2_odd = 0;
    for (int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        if(temp % 2)
            vec1_odd++;
        else
            vec1_even++;
    }
    
    
    for (int i = 0; i < m; ++i){
        int temp;
        cin >> temp;
        if(temp % 2)
            vec2_odd++;
        else
            vec2_even++;
    }
    
    // pick up as many odd even pairs as possible

    int ans = min(vec1_even, vec2_odd) + min(vec1_odd, vec2_even);

    cout << ans;


    return 0;
}
