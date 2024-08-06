#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define FAST (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define sz(x) (int)(x).size()

void solve()
{
    int n;
    cin >> n;

    vector<ll> vec(n);
    vector<ll> odd;
    vector<ll> even;

    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];
        if (vec[i] % 2 != 0)
            odd.push_back(vec[i]);
        else
            even.push_back(vec[i]);
    }

    // If all numbers are of the same parity, no operations are needed
    if (odd.size() == n || even.size() == n)
    {
        cout << 0 << endl;
        return;
    }

    // Largest odd and even numbers
    ll max_odd = *max_element(odd.begin(), odd.end());
    ll max_even = *max_element(even.begin(), even.end());

    int operations = 0;
    bool all_same_parity = true;

    // Check if all elements in vec are of the same parity
    for (int i = 1; i < n; i++)
    {
        if (vec[i] % 2 != vec[0] % 2)
        {
            all_same_parity = false;
            break;
        }
    }

    if (all_same_parity)
    {
        cout << 0 << endl;
        return;
    }

    // Sort the array to process even elements first
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
    {
        if (vec[i] % 2 == 0 && vec[i] < max_odd)
        {
            operations++;
            vec[i] = vec[i] + max_odd;
            max_odd = max(max_odd, vec[i]);
        }
    }

    // Check again if all elements are of the same parity
    all_same_parity = true;
    for (int i = 1; i < n; i++)
    {
        if (vec[i] % 2 != vec[0] % 2)
        {
            all_same_parity = false;
            break;
        }
    }

    if (all_same_parity)
    {
        cout << operations << endl;
        return;
    }

    // Find the index of the largest odd number in the array
    ll index_max_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] % 2 == 1 && vec[i] == max_odd)
        {
            index_max_odd = i;
            break;
        }
    }

    // Perform one more operation to make the largest odd and largest even sum
    vec[index_max_odd] = max_odd + max_even;
    operations++;

    // Count the number of remaining operations needed to make all numbers the same parity
    for (int i = 0; i < n; i++)
    {
        if (vec[i] % 2 == 0)
        {
            operations++;
        }
    }

    cout << operations << endl;
}

int main()
{
    FAST;
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
