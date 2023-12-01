// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t


set<long> eligible(int n){
    set<long> div;
    for (int i = 1; i*i <= n; ++i){
        if(!(n % i)){
            div.insert(i);
            div.insert(n / i);
        }
    }
    return div;
}


void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }

    long diff = 0;

    for(long it : eligible(n)){

        vector<long> temp(it);

        for (int i = 0; i < n; ++i){
            temp[i / (n / it)] += vec[i];
        }
        
        diff = max(diff, *max_element(temp.begin(), temp.end()) - *min_element(temp.begin(), temp.end()));
    }
    cout << diff << '\n'; 
    
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
