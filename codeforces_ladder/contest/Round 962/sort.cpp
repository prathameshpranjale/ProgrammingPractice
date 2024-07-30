#include <bits/stdc++.h>
using namespace std;

#define FAST (ios_base::sync_with_stdio(false), cin.tie(NULL))

int main()
{
    FAST;
    int test;
    cin >> test;

    while (test--)
    {
        int n, q;
        cin >> n >> q;

        string a, b;
        cin >> a >> b;

        vector<pair<int, int>> queries(q);
        for (int i = 0; i < q; ++i)
        {
            int l, r;
            cin >> l >> r;
            queries[i] = {l - 1, r - 1}; 
        }

        for (const auto &[l, r] : queries)
        {
            vector<int> count_a(26, 0), count_b(26, 0);


            for (int i = l; i <= r; ++i)
            {
                count_a[a[i] - 'a']++;
                count_b[b[i] - 'a']++;
            }

            int changes = 0;
            for (int i = 0; i < 26; ++i)
            {
                changes += abs(count_a[i] - count_b[i]);
            }

          
            cout << changes / 2 << endl;
        }
    }

    return 0;
}
