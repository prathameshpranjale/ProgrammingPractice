#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define FAST (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define sz(x) (int)(x).size()

int f(int a, int b)
{
    if (a > b)
        return 1;
    if (a == b)
        return 0;
    if (a < b)
        return -1;
    return 0; // This line is never reached but added for safety.
}

int main()
{
    FAST;
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;

        if (f(a, c) + f(b, d) > 0)
        {
            ans += 1;
        }
        if (f(a, d) + f(b, c) > 0)
        {
            ans += 1;
        }
        if (f(b, c) + f(a, d) > 0)
        {
            ans += 1;
        }
        if (f(b, d) + f(a, c) > 0)
        {
            ans += 1;
        }

        cout << ans << "\n";
    }

    return 0;
}
