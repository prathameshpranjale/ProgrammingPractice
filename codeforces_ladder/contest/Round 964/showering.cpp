#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()

int main()
{
    FAST;
    int t;
    cin >> t;

    while (t--)
    {
        ll n, s, m;
        cin >> n >> s >> m;
        vector<pair<ll, ll>> intervals(n);
        for (int i = 0; i < n; i++)
        {
            cin >> intervals[i].first >> intervals[i].second;
        }

        bool canshower = false;

        // Check free time before the first task
        if (intervals[0].first >= s)
        {
            canshower = true;
        }

        // Check free time between tasks
        if (!canshower)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (intervals[i + 1].first - intervals[i].second >= s)
                {
                    canshower = true;
                    break;
                }
            }
        }

        // Check free time after the last task
        if (!canshower && m - intervals[n - 1].second >= s)
        {
            canshower = true;
        }

        if (canshower)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}