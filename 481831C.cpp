// Author: yeeter

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long int64_t
#define ll long long
#define MOD (1000000007)
#ifdef MOD
#define SAFE_RED(a) (((a) % MOD + MOD) % MOD)
#define RED(a)      ((a) % MOD)
#define ADD(a, b)   RED((a) + (b))
#define SUB(a, b)   ADD(RED((a) - (b)), MOD)
#define MUL(a, b)   RED(((long) a) * (b))
#define DIV(a, b)   MUL((a), modexp(b, MOD - 2))
#define POW(a, b)   modexp(a, b)
#define INC(a, b)   a = ADD(a, b)
#define TIM(a, b)   a = MUL(a, b)
#else
#define SAFE_RED(a) (a)
#define RED(a)      (a)
#define ADD(a, b)   ((a) + (b))
#define SUB(a, b)   ((a) - (b))
#define MUL(a, b)   ((a) * (b))
#define DIV(a, b)   ((a) / (b))
#define POW(a, b)   long(pow(a, b))
#define INC(a, b)   (a += b)
#define TIM(a, b)   (a *= b)
#endif

long modexp(long x, long y)
{
    long res = 1;
    x = SAFE_RED(x);
    while (y)
    {
        if (y & 1)
            TIM(res, x);
        y >>= 1;
        TIM(x, x);
    }
    return res;
}

void solve()
{
    long n;
    cin >> n;
    
    // right = [i, j + 1] and down = [i+1, j]
    // no dont iterate just solve sum(i*i) till n + sum(i*(i+1)) till n - 1 and call it a day
    // gives n(2* n * n - 3n +)
    long sum = DIV(MUL( MUL((n), ((n + 1))), ((4 * n - 1)) ) , 6);

    cout << MUL((sum),2022) << '\n';
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
