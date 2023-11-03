// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t


bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }

    vector<int> diff;
    int flag = 1;
    for (int i = 0; i < n - 1; ++i){
        int temp = vec[i + 1] - vec[i];
        if(temp < 0)
            flag = 0;
        diff.push_back(temp);
    }

    if(flag == 0)
        cout << "NO\n";
    
    for (int i = 0; i < (int)diff.size(); ++i){
        if(!(isPowerOfTwo(i)) && diff[i] < 0){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";

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
