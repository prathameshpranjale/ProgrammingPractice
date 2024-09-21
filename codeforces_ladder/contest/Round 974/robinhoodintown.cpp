#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define FAST (ios_base::sync_with_stdio(false), cin.tie(NULL))

bool unhappy(ll totalwealth, ll mid, vector<ll> &arr, ll n)
{
    ll count = 0;
    ll new_total = totalwealth + mid; // total wealth after adding mid

    // Count how many are unhappy
    for (ll i = 0; i < n; i++)
    {
        if (2 * arr[i] * n < new_total)
        { // Check if wealth is less than half the new average
            count++;
        }
    }

    return count * 2 > n; // More than half the population is unhappy
}

int main()
{
    FAST;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        ll totalwealth = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            totalwealth += arr[i];
        }

        sort(arr.begin(),arr.end());

        if (n <= 2)
        {
            cout << -1 << "\n";
            continue;
        }

        // Check if without adding any wealth, the condition is already satisfied
        if (unhappy(totalwealth, 0, arr, n))
        {
            cout << 0 << "\n";
            continue;
        }

        ll low = 0, high = 1e18;
        ll result = -1;

        while (low <= high)
        {
            ll mid = low + (high - low) / 2.0;

            // Use the unhappy function with the new total wealth
            if (unhappy(totalwealth, mid, arr, n))
            {
                result = mid;
                high = mid - 1; // Try to find a smaller valid x
            }
            else
            {
                low = mid + 1; // Need to increase x
            }
        }

        cout <<result << "\n"; // This will be the smallest x that makes Robin Hood appear
    }

    return 0;
}
