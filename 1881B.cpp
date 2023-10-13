// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int N = 3;
    multiset<int, greater<>> s;
    for(int i = 0; i < N; ++i){
        int d;
        cin >> d;
        s.insert(d);
    }


    for(int i = 0; i < N; ++i){
        int x = *s.begin(), y = *s.rbegin();
        if(x == y){
            cout << "YES" << endl;
            return;            
        }
        s.erase(s.begin());
        s.insert(x - y), s.insert(y);     
    }

    if(*s.begin() != *s.rbegin())
        cout << "NO" << endl;   
    else 
        cout << "YES" <<endl;
    
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
