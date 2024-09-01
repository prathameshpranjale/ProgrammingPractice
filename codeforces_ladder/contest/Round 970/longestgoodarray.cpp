#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()

int maxGoodArrayLength(long long l, long long r)
{
    int length = 0;
    ll current = l;
    ll diff = 1;

    while (current <= r)
    {
        length++;
        current += diff;
        diff++;
    }

    return length;
}

int main()
{
    FAST;

    int t;
    cin >> t;

    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << maxGoodArrayLength(l, r) << endl;
    }

    return 0;
}
