// Author: πα

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    string q;
    cin >> q;
    for(int i = 0; i < t; i++){
        for (int j = 0; j + 1 < q.size(); j++){
            if((q[j] == 'B') && (q[j+1] == 'G')){
                swap(q[j], q[j+1]), j++;
            }
        }
    }
    cout << q << endl;
    return 0;
}
