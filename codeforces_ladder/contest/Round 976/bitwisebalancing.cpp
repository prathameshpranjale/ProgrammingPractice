#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define FAST (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define sz(x) (int)(x).size()

int main()
{
    FAST;
    int t;
    cin >> t;
    while (t--)
    {
        ll b, c, d;
        cin >> b >> c >> d;
        ll result = 0;
        bool notpossible = false;

        for (int i = 0; i <= 61; i++)
        {
            ll b_bit = (b >> i) & 1; 
            ll c_bit = (c >> i) & 1; 
            ll d_bit = (d >> i) & 1; 
            ll ans = 0;

            if (b_bit == 1 && c_bit == 0 && d_bit == 0){
                notpossible = true;
                break;
            }
            else if (b_bit == 0 && c_bit == 1 && d_bit == 1){
                notpossible = true;
                break;
            }
            else if (b_bit == 0 && c_bit == 0 && d_bit == 1)
            {
                    ans = 1;
            }
            else if (b_bit == 0 && c_bit == 0 && d_bit == 0)
            {
                ans = 0;
            }
            else if (b_bit == 1 && c_bit == 1 && d_bit == 1)
            {
                ans = 0;
            }
            else if (b_bit == 1 && c_bit == 1 && d_bit == 0)
            {
                ans = 1;
            }
            else if (b_bit == 0 && c_bit == 1)
            {
                ans = 0;
            }
            else if (b_bit == 1 && c_bit == 0)
            {
                ans = 1;
            }
            else{
                notpossible = true;
                break;
            }

                result |= (ans << i); 
        }

        if (notpossible)
        {
            cout << -1 << "\n";
        }
        else
        {
           
            cout << result << "\n";
        }
    }
    return 0;
}
