// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t

bool canFormPalindrome(string str)
{
    
    int count[str.size()] = { 0 };
 
    
    for (int i = 0; str[i]; i++)
        count[str[i]]++;
 

    int odd = 0;
    for (int i = 0; i < str.size(); i++) {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    map<char, int> vec;
    string temp;
    cin >> temp;
    for (int i = 0; i < n; ++i){
        vec[temp[i]]++;
    }


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
