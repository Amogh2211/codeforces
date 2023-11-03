// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n, k;
    cin >> n;
    string s;
    cin >> s;
    cin >> k;
    string special;

    for (int i = 0; i < k; ++i){
        char temp;
        cin >> temp;
        special.push_back(temp);
    }

    //cout <<  special << '\n';
    int count_zeros = 0, count_ones = 0;
    for (int i = 0; i < (int)s.size(); ++i){
        if(special.find(s[i]) != string::npos){
            s[i] = '1';
            count_ones++;
        }
        else
            s[i] = '0';
    }

    if(count_ones == 0){
        cout << 0 << '\n';
        return;

    }

    //cerr << s << '\n';
    
    // for (int i = (int)s.size() - 1; i > -1 ; --i){
    //     if(s[i] == '0'){
    //         cout << i << ' ';
    //         s.erase(s[i]);
    //     }
    //     if(s[i] == '1'){
    //         count_ones++;
    //     }
    // }


    // Remove right zeros
    int index = (int)s.size() - 1;
    while(s[index] != '1' ){
        cerr << s[index]<< ' ' << index << '\n';
        
        if(s[index] == '0')
            s.erase(index);
        index--;
    }
    
    count_ones = 0;
    int res = 0;  
    cerr << s << '\n';
    {
        for (int i = 0; i < (int)s.size(); ++i){
            if(s[i] == '0')
                count_zeros++;
            else
                count_ones++;
        }
        res = count_zeros + count_ones - 1;
    }
          
    cout << res << '\n';
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
