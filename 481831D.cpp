// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t
#include <vector>

#define x first
#define y second

int main()
{
    int n;
    cin >> n;
    vector<pair <int,int>> vec1(n), vec2(n);
    for (int i = 0; i < n; ++i){
        cin >> vec1[i].x >> vec1[i].y;
    }

    for (int i = 0; i < n; ++i){
        cin >> vec2[i].x >> vec2[i].y;
    }

    return 0;
}
