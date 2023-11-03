// Author: #############

#include <bits/stdc++.h>
#include <string>
using namespace std;
#define long int64_t

void score(){

}

void solve()
{
    string input;
    cin >> input;
    
    // cout << team1 << ' ' << team2 << '\n';

    int ans = 9;
{
    int count1 = 0, count2 = 0;

    for (int i = 0; i < 10; ++i){
        if(i % 2 == 0) count1 += input[i] != '0';
        else count2 += input[i] == '1';
        if(count1 > count2 + (10 - i)/ 2) ans = min(ans, i);
        if(count2 > count1 + (9-i)/2) ans = min(ans, i);
    }
}

{
    int count1 = 0, count2 = 0;
    for (int i = 0; i < 10; ++i){
        if(i % 2 == 0) count1 += input[i] == '1';
        else count2 += input[i] != '0';
        if(count1 > count2 + (10 - i) / 2) ans = min(ans, i);
        if(count2 > count1 + (9 - i) / 2) ans = min(ans, i);
    }


}
    
    cout << ans + 1 << '\n';
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
