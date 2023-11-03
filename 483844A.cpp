// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    long hc, dc, hm, dm, k, w, a;
    cin >> hc>> dc>> hm>> dm>> k>> w>> a;
    long new_hc, new_dc = 0;
    string res = "NO\n";

    

    for (int i = 0; i < k + 1; ++i){

        new_hc = hc + i * a; // Armour upgrade
        new_dc = dc + (k - i) * w; // Damage upgrade

        long num_attacks_char = (hm / new_dc + bool(hm % new_dc)), num_attacks_monster = new_hc/ dm + bool(new_hc% dm);
        // cerr << num_attacks_char << ' ' << num_attacks_monster << '\n';
        if(num_attacks_char - num_attacks_monster <= 0){
            res = "YES\n";
            cout << res;
            return;
        }
    }

    cout << res;
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
