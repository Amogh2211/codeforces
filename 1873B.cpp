// Author: πα

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    vector<int> digits;
    cin >> n;
    int digit;
    for(int i = 0; i < n; i++){
        cin >> digit;
        digits.push_back(digit);
    }
    sort(digits.begin(), digits.end());

    digits[0] += 1;
    int product = std::accumulate(digits.begin(), digits.end(), 1, std::multiplies<int>());
    cout << product << endl;
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
