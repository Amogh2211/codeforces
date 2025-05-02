// Author: yeeter

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

void solve()
{
    string first, second;
    cin >> first >> second;

    int n = first.size();
    int m = second.size();

    if (m < n || m > 2 * n || first[0] != second[0])
    {
        std::cout << "NO" << '\n';
        return;
    }

    int cnt = 1;
    vector<int> leftCount;
    vector<int> rightCount;

    for (int i = 0; i < (int)first.length(); ++i)
    {
        if (first[i] != first[i - 1])
        {
            leftCount.push_back(cnt);
            cnt = 1;
        }
        else
            cnt++;
    }
    leftCount.push_back(cnt);
    cnt = 1;
    for (int i = 0; i < (int)second.length(); ++i)
    {
        if (second[i] != second[i - 1])
        {
            rightCount.push_back(cnt);
            cnt = 1;
        }
        else
            cnt++;
    }
    
    rightCount.push_back(cnt);

    if (rightCount.size() != leftCount.size())
    {
        std::cout << "NO" << '\n';
        return;
    }

    for (int i = 0; i < leftCount.size(); ++i)
    {
        if(leftCount[i] > rightCount[i] || leftCount[i] * 2 < rightCount[i]){
            std::cout << "NO" << '\n';
            return;
        }
    }

    std::cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
