// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

// bool sum_check(string s){
//     long sum_first_half = 0, sum_second_half = 0;
//     int l = 0, r = (int)s.size() - 1;
//     while(l != r){
//         sum_first_half += (int)s[l];
//         sum_second_half += (int)s[r];
//         l++, r--;
//     }
//     return (sum_first_half == sum_second_half);
// }


int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> vec(n);
    for (int i = 0; i < n; ++i){
        cin >> vec[i];
    }

    // even + even = even
    // odd + odd = even

    set<string> visited;   
    int count = 0;
    string s = vec[0] + vec[1];
    
    cout << stoi(s);

    // long sum_first_half = 0, sum_second_half = 0;
    // int l = 0, r = (int)s.size() - 1;
    // while(l != r){
    //     sum_first_half += (int)s[l];
    //     sum_second_half += (int)s[r];
    //     l++, r--;
    // }

    // for (int i = 0; i < n; ++i){
    //     for (int j = 0;j < n; ++j){
    //         string s = vec[i] + vec[j];
    //         if(visited.find(s) != visited.end()){
    //             continue;
    //         }
    //         else{
    //             visited.insert(s);
    //             if(sum_check(s))
    //                 count++;
    //         }
    //     }
    // }



    return 0;
}

