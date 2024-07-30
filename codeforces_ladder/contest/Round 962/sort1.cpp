#include <bits/stdc++.h>
using namespace std;

#define FAST (ios_base::sync_with_stdio(false), cin.tie(NULL))

int main()
{
    FAST;
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        string a, b;
        cin >> a >> b;

        // Prefix frequency arrays
        vector<vector<int>> prefix_a(n + 1, vector<int>(26, 0));
        vector<vector<int>> prefix_b(n + 1, vector<int>(26, 0));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 26; ++j)
            {
                prefix_a[i + 1][j] = prefix_a[i][j];
                prefix_b[i + 1][j] = prefix_b[i][j];
            }
            prefix_a[i + 1][a[i] - 'a']++;
            prefix_b[i + 1][b[i] - 'a']++;
        }

        for (int i = 0; i < q; ++i)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--; // converting to 0-based index

            vector<int> count_a(26, 0), count_b(26, 0);
            for (int j = 0; j < 26; ++j)
            {
                count_a[j] = prefix_a[r + 1][j] - prefix_a[l][j];
                count_b[j] = prefix_b[r + 1][j] - prefix_b[l][j];
            }

            int changes = 0;
            for (int j = 0; j < 26; ++j)
            {
                changes += abs(count_a[j] - count_b[j]);
            }

            cout << changes / 2 << endl;
        }
    }

    return 0;
}
