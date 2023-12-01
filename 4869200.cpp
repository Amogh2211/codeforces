// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    long n;
    cin >> n;
    string s;
    cin >> s;
    long count = 0;
    // Turn a mf around to see how much change exists, if positive, change them if negative from what already exists, dont

    vector<long> vec;
    for (long i = 0; i < n; ++i){
        if(s[i] == 'L'){
            vec.push_back((n - i - 1) - i); // if turn around how much change
            count += i; 

        }
        else{
            vec.push_back(i - (n - 1 - i)); 
            count += n - 1 - i; // if turn around how much change
        }
    }

    sort(vec.begin(), vec.end(), greater<int>()); // We only take positive values from here to maximise the value of line
    for (long i = 0; i < n; ++i){
        if(vec[i] > 0) count += vec[i];

        cout << count << ' ';
    }
    cout << '\n';
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
