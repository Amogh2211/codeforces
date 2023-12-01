// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int lin, quad;
    cin >> lin >> quad;
    vector <long> linear(lin);
    for (int i = 0; i < lin; i++) {
        cin >> linear[i];
    }
    sort(linear.begin(), linear.end());

    for (int i = 0; i < quad; i++) {
        long a, b, c;
        cin >> a >> b >> c;

        int check = lower_bound(linear.begin(), linear.end(), b) - linear.begin();
        if (check < lin && (linear[check] - b) * (linear[check] - b) < 4 * a * c) {
            cout << "YES\n" << linear[check] << "\n";
            continue;
        }
        if (check > 0 && (linear[check - 1] - b) * (linear[check - 1] - b) < 4 * a * c) {
            cout << "YES\n" << linear[check - 1] << "\n";
            continue;
        }
        cout << "NO\n";
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
