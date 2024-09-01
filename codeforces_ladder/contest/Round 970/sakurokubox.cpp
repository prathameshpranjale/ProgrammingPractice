#include <bits/stdc++.h>
using namespace std;
typedef long long unt;
typedef vector<long long> vt_unt;

const long long mod = 1e9 + 7;

namespace smart_math
{
    inline long long quickpow(long long a, long long b, long long mod = 0)
    {
        long long ret = 1;
        while (b)
        {
            if (b & 1)
                ret *= a;
            if (mod)
                ret %= mod;
            b >>= 1;
            a *= a;
            if (mod)
                a %= mod;
        }
        if (mod)
            ret %= mod;
        return ret;
    }
}
using namespace smart_math;
int solve()
{
    unt n;
    cin >> n;
    vt_unt a(n + 10);
    vt_unt sum(n + 10);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = n; i >= 1; i--)
    {
        sum[i] = sum[i + 1] + a[i];
        sum[i] %= mod;
    }
    unt ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += a[i] * (sum[i + 1]);
        ans %= mod;
    }
    unt res = (unt)n * (n - 1) / 2;
    res = quickpow(res, mod - 2, mod);
    ans = ans * res + 1ll;
    ans %= mod;
    cout << ans - 1 << endl;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testcase;
    testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }

    return 0;
}


