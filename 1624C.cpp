// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    set<int> s;
    bool answer = true;
    vector<long> array(n);
    for (int i = 0; i < n; ++i){
        cin >> array[i];

        while(array[i] > n or s.count(array[i])){
            array[i] /= 2;
        }

        if(array[i] == 0)
            answer = false;

        else
            s.insert(array[i]);
    }

    
    // for (int i = 0; i < n; ++i){
    //     cout << array[i] << " ";
    // }   
        //cout << array[i] << " "  << "i = " << i << "\n";


    // array[i] > n
    if(answer == false)
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";    
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
