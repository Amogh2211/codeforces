// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int main()
{
    int n;
    cin >> n;
    vector<int> a(n - 1), b(n);
    for (int i = 0; i < n - 1; ++i){
        cin >> a[i];
    }

    set<int> visited;
    for (int i = 0; i < (int)a.size(); ++i){
        b[i+1] = a[i] ^ b[i];
        visited.insert(b[i+1]);
    }

   for (int i = 1; i < n; ++i){
    if(visited.find(i) == visited.end()){
        b[i] = i;
    }
   }

   for (int i = 0; i < n; ++i){
    cout << b[i] << ' ';
   }

    return 0;
}
