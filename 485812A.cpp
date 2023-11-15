// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i){
        cin >>vec[i];
    }   

    sort(vec.begin(), vec.end());
    // so if u use some type 2 nonsense, if a monster has health h remaining, the number of type 1 u have to shoot is a_i - h; (assuming no one died)
    // so total type 1 would be sum(a_i - h)
    // maximise sum(h) so sum(a_i - h) reduces
    // also answer is essentially sum(a_i - h)

    vector<int> healths(n); // THis bitch is sorted too because we are going to compare with a_i (vec in our case), so for all i healths_i < vec_i 
    healths[0] = 1;

    for (int i = 1; i < n; ++i){
        healths[i] = min(healths[i - 1] + 1, vec[i]);
    }

    long ans = 0;
    for (int i = 0; i < n; ++i){
        ans += vec[i] - healths[i];
    }

    cout << ans << '\n';

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
