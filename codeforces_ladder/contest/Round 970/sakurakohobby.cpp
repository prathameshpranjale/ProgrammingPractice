#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()

void computeBlackCounts(const vector<int> &permutation, const string &colors, vector<int> &blackCountResult)
{
    int size = permutation.size();
    vector<bool> visited(size, false);
    // dfs  
    for (int start = 0; start < size; ++start)
    {
        if (!visited[start])
        {
            vector<int> cycleNodes;
            int currentNode = start;

            while (!visited[currentNode])
            {
                visited[currentNode] = true;
                cycleNodes.push_back(currentNode);
                currentNode = permutation[currentNode] - 1;
            }

            int blackNodesCount = 0;
            for (int node : cycleNodes)
            {
                if (colors[node] == '0')
                {
                    ++blackNodesCount;
                }
            }

            for (int node : cycleNodes)
            {
                blackCountResult[node] = blackNodesCount;
            }
        }
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

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        string s;
        cin >> s;

        vector<int> blackCounts(n, 0);
        computeBlackCounts(arr, s, blackCounts);

        for (int count : blackCounts)
        {
            cout << count << " ";
        }
        cout << "\n";
    }

    return 0;
}
