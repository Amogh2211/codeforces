// Author: yeeter

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int main()
{
    int n, c;
    cin >> n >> c;

    vector<int> pos{0,0,0};
    pos[c] = 1;
    int moves = n % 6;
    for (int i = moves; i > 0; --i){
        if(i % 2){
            swap(pos[0], pos[1]);
        }
        else{
            swap(pos[1], pos[2]);
        }
    }

    for (int i = 0; i < pos.size(); ++i){
        if(pos[i])
            cout << i;
        else
            continue;
    }
    return 0;
}
