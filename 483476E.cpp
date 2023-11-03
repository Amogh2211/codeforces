// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

//given n max is 200000 so take vector size as that?

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(200005);

    for (int i = 1; i <= n; ++i){
        cin >> vec[i];
    }

    long res = 0;
    // first element does not need any operations on it as the whole array will change otherwise
    // so iterate from two
    for (int i = 2; i <= n; ++i){
        res += abs(vec[i] - vec[i - 1]);
    }

    int temp = max(abs(vec[1] - vec[2]) , abs(vec[n] - vec[n - 1]));

    for (int i = 2; i < n; ++i){
        temp = max(temp, abs(vec[i] - vec[i - 1]) + abs(vec[i + 1] - vec[i]) - abs(vec[i + 1] - vec[i - 1]));
    }

    cout << res - temp << '\n';

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
