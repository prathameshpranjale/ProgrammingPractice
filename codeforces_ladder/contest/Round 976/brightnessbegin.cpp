#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()

int main()
{
    FAST;

    int t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;

        ll left = k, right = 2 * k, n = right; 

        while (left <= right)
        {
            ll mid = left + (right - left) / 2;      
            ll sqrtMid = static_cast<ll>(sqrt(mid)); 

            if (mid - sqrtMid == k)
            {
                n = mid;
                right = mid - 1; 
            }
            else if (mid - sqrtMid < k)
            {
                left = mid + 1; 
            }
            else
            {
                right = mid - 1; 
            }
        }

        cout << n << "\n"; 
    }

    return 0;
}