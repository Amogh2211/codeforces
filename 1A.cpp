// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;

    long asd = long(n / k + bool(n % k)) * (m/k + bool(m %k));
    cout << asd;
    return 0;
}
