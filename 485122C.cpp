// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> positive, negative, the_rest;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x > 0) positive.push_back(x);
        else if(x < 0) negative.push_back(x);
        else{
            if((int)the_rest.size() < 2)
                the_rest.push_back(x);
        }
    }

    if((int)positive.size() > 2 or (int)negative.size() > 2){
        cout << "NO\n";
        return;
    }

    for(int i : positive){
        the_rest.push_back(i);

    }

    for(int i : negative){
        the_rest.push_back(i);    
    }

    for (int i = 0; i < (int)the_rest.size(); ++i){
        for (int j = i + 1; j < (int)the_rest.size(); ++j){
            for (int k = j + 1; k < (int)the_rest.size(); ++k){
                int flag = 0;
                for (int what = 0; what < (int)the_rest.size(); ++what){
                    if(the_rest[i] + the_rest[j] + the_rest[k] == the_rest[what])
                        flag = 1;
                }
                if(flag == 0){
                    cout << "NO\n";
                    return;
                }
            }
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
