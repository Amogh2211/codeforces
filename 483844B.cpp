// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

// b will have sum of all a twice, because it has all elements of a and the sum and some bullshit x
// so sum_b = 2 * sum_a - x
// the only issue with the whole thing is that you have to get rid of that bullshit x
// now x = 2 * sum_a - sum_b
#define max_int_question 2000000000

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n + 2), a(n);
    for (int i = 0; i < n + 2; ++i){
        cin >> b[i];
    }

    multiset<int> check(b.begin(), b.end()); // this bitch has everything in b in a sorted manner, so the sum and x also exist here
    
    long sum_b = accumulate(b.begin(), b.end(), (long)0);
    for(int x : b){
        check.erase(check.find(x));
        sum_b -= x;

        if (sum_b % 2 == 0 && sum_b <= max_int_question && check.find(sum_b / 2) != check.end()) { // If sum is even and sum is less that max possible, and somehow you find the sum / 2 before you hit end that means it does not exist in a
            check.erase(check.find(sum_b / 2));
            for (int y : check) {
                cout << y << " ";
            }
            cout << endl;
            return;
            }
            sum_b += x;
            check.insert(x);
  }

    cout << -1 << '\n';


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
