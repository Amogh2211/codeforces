    // Author: yeeter
    
    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
    #define long int64_t
    
    void solve()
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; ++i){
            cin >> vec[i];
        }

        int res = 0;

        int min_right = INT_MAX;
        for(int i = n-1; i >= 0; i--){
            if(vec[i] > min_right)
                res++;
            min_right = min(vec[i], min_right);
        }

        cout << res << '\n';
        
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
    