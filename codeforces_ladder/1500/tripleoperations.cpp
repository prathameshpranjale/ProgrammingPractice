#include <bits/stdc++.h>

using namespace std;

const int MAX = 200007; // Define the maximum limit
int a[MAX], psum[MAX];  // Arrays to store division counts and prefix sums

// Function to calculate how many times you can divide x by 3 until it becomes 0
int f(int x)
{
    int cnt = 0;
    while (x)
    {
        x /= 3;
        cnt++;
    }
    return cnt;
}

void solve()
{
    int l, r;
    cin >> l >> r;
    // Use the prefix sum array to calculate the sum of division counts in range [l, r]
    cout << psum[r] - psum[l - 1] + a[l] << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute the division counts for every number up to MAX
    psum[0] = 0;
    for (int i = 1; i < MAX; i++)
    {
        a[i] = f(i);
        psum[i] = psum[i - 1] + a[i];
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
