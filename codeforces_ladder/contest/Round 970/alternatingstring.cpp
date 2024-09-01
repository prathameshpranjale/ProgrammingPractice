#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()

int minChanges(const string &str, int len)
{
    if (len % 2 == 0)
    {
        unordered_map<char, int> evenCount, oddCount;
        for (int i = 0; i < len; ++i)
        {
            if (i % 2 == 0)
                ++evenCount[str[i]];
            else
                ++oddCount[str[i]];
        }

        int maxEven = 0, maxOdd = 0;
        for (const auto &e : evenCount)
            maxEven = max(maxEven, e.second);
        for (const auto &o : oddCount)
            maxOdd = max(maxOdd, o.second);

        return len / 2 - maxEven + len / 2 - maxOdd;
    }
    else
    {
        if (len == 1)
            return 1;

        int minChanges = INT_MAX;
        unordered_map<char, int> eCount, oCount, eAfter, oAfter;

        for (int i = 0; i < len - 1; ++i)
        {
            if (i % 2 == 0)
                ++eCount[str[i]];
            else
                ++oCount[str[i]];
        }

        int maxE = 0, maxO = 0;
        for (const auto &e : eCount)
            maxE = max(maxE, e.second);
        for (const auto &o : oCount)
            maxO = max(maxO, o.second);
        minChanges = min(minChanges, len / 2 - maxE + len / 2 - maxO);

        for (int i = len - 2; i >= 0; --i)
        {
            if (i % 2 == 0)
            {
                --eCount[str[i]];
                ++eAfter[str[i + 1]];
            }
            else
            {
                --oCount[str[i]];
                ++oAfter[str[i + 1]];
            }

            unordered_map<char, int> mergedE = eCount;
            for (const auto &a : eAfter)
                mergedE[a.first] += a.second;

            unordered_map<char, int> mergedO = oCount;
            for (const auto &a : oAfter)
                mergedO[a.first] += a.second;

            maxE = 0, maxO = 0;
            for (const auto &e : mergedE)
                maxE = max(maxE, e.second);
            for (const auto &o : mergedO)
                maxO = max(maxO, o.second);

            minChanges = min(minChanges, len / 2 - maxE + len / 2 - maxO);
        }

        return minChanges + 1;
    }
}

int main()
{
    FAST;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << minChanges(s, n) << "\n";
    }

    return 0;
}
