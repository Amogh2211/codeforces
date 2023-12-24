// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    long n, num_pos = 0, num_zero = 0, num_neg = 0;
    cin >> n;
    vector<long> vec;
    for (int i = 0; i < n; ++i){
        long temp, curr_max = 0, curr_min = 0;
        cin >> temp;
        curr_max = max(curr_max, temp);
        curr_min = min(curr_min, temp);
        if(temp > 0)
            num_pos++;
        if(temp < 0)
            num_neg++;
        if(temp == 0)
            num_zero++;

        vec.push_back(temp);
    }       

    if(num_zero){
        cout << 0 << '\n';
        return;
    }

    if(num_neg%2){
        cout << 0 << '\n';
        return;
    }

    else{
        cout << 1 << '\n';
        cout << 1 << ' ' << 0 << '\n';
        return;
    }
    
}




// -1 -2 -3 -4 -5, -2 1 -5 3 4 

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
