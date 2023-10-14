// Author: yeeter

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, num_queries;
    cin >> n;
    vector<int> array1(n + 1);
    for (int i = 0; i < n; ++i){
        int d;
        cin >> d;
        array1[d] = i;
    }
    
    long vasya  = 0, petya= 0;
    cin >> num_queries;
    while(num_queries--){
        int d;
        cin >> d;
        vasya += array1[d] + 1;
        petya += n - array1[d] ;
    }

    cout << vasya << " " << petya << endl; 

    return 0;
}
