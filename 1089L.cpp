// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int main()
{
    int n, k;
    cin >> n >> k;
    vector<long> job(n), beg(n);
    for (int i = 0; i < n; ++i){
        cin >> job[i];
    }

    for (int i = 0; i < n; ++i){
        cin >> beg[i];
    }

    map<long, vector<long>> m;

    for (int i = 0; i < n; ++i){
        m[job[i]].push_back(beg[i]); // 1 -> 5, 7,8, 2
    }

    vector<long> jobless;

    for(auto [key,value] : m){
        // cerr << key << "  : ";
        // for (auto it : value){
        //     cerr << it << ' ';
        // }
        sort(value.begin(), value.end());
        jobless.insert(jobless.end(), value.begin(), value.end() - 1);  
        //cerr << '\n';
    }

    sort(jobless.begin(), jobless.end());

    long leftover = k - m.size(), sum = 0;
    for (long i = 0; i < leftover; ++i){
        sum += jobless[i];
    }

    cout <<  sum << '\n';

    // set<long> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);

    // multiset<long> ms;
    // ms.insert(1);
    // ms.insert(1);
    // ms.insert(2);
    // ms.insert(3);
    // ms.insert(2);
    // ms.erase(ms.find(2));

    // cerr << *(ms.find(2))<< '\n';
    
    // for (auto it : s){
    //     cerr << it << ' ';
    // }
    // cerr << '\n';

    // for (auto it : ms){
    //     cerr << it << ' ';
    // }

    // cerr << '\n';

    




    // vector<long> a1, a2, a3;
    // vector<vector <long>> b(3); // a1, a2
    // a2.push_back(2);
    // b[1].push_back()

    return 0;
}
