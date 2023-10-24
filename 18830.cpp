// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define long int64_t

void solve()
{
    string s;
    cin >> s;
    
    //cout << s.size() << '\n';
    for (int i = 0; i < 4; ++i){
        if(s[i] == '0')
            s[i] = '9' + 1;
    }
    int seconds = 0, move = 0, initial = 1, current = 0;
    int first_move = abs((int)(s[0]) - 49);
    // cout << first_move << '\n';
    seconds += first_move;
    for (int i = 0; i < s.size() - 1; ++i){
        move = abs( (int)s[i] - (int)(s[i+1]) ) ;
        // cout << s[i] << ' ' << int(s[i]) << ' ' <<  s[i + 1] << ' ' << int(s[i+1])<< ' ' << "Move was: " << move <<'\n';
        seconds += move + 1;
    }

    cout << seconds + 1<< '\n';    
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
