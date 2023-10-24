// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    int c_zero = 0, c_one = 0;
    int sum_zero, sum_one;
    string s;
    cin >> s;

    for(char c : s){
        if(c == '0')
            c_zero += 1;
        else
            c_one ++;    
    }

    // c_zero has to be >=i for a solution to occur
    // MIN STEPS ??????
    
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
