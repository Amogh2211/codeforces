// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> vec(n), odd, even;
    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end(), greater<int>());
    
    for (int i = 0; i < n; ++i){
        if(vec[i] % 2){
            odd.push_back(vec[i]);
        }
        if(!(vec[i] % 2))
            even.push_back(vec[i]);
    }

    sort(odd.begin(), odd.end(), greater<int>());
    // for (auto i : odd){
    //     cerr << i  << ' ';
    // }
    // cerr << '\n' << "===================\n";
    sort(even.begin(), even.end(), greater<int>());
    // for (auto i : even){
    //     cerr << i << ' ';
    // }
    // cerr << '\n' << "===================\n";

    long sum_total = accumulate(odd.begin(), odd.end(), 0) + accumulate(even.begin(), even.end(), 0);
    //cerr << sum_total << '\n';
    int common = min((int)odd.size(), (int)even.size());
    // cerr << common << '\n';
    int move = vec.size() / sizeof(vec[0]);
    
    sum_total -= accumulate(odd.begin(), odd.begin() + (common), 0) +  accumulate(even.begin(), even.begin() + (common), 0);
    
    if((int)even.size() > common){
        sum_total -= even[common];
    }
    if((int)odd.size() > common){
        sum_total -= odd[common];
    }
    cout << sum_total << '\n';
    
    return 0;
}
