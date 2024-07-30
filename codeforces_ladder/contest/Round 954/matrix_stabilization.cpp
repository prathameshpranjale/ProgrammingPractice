
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void stabilize_matrix(vector<vector<int>> &arr, int n, int m)
{
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    vector<vector<int>> b = arr;

    bool changed;
    do
    {
        changed = false;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int max_neighbor = 0;
                for (int d = 0; d < 4; ++d)
                {
                    int ni = i + dx[d];
                    int nj = j + dy[d];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m)
                    {
                        max_neighbor = max(max_neighbor, b[ni][nj]);
                    }
                }
                if (arr[i][j] > max_neighbor)
                {
                    arr[i][j] = max_neighbor;
                    changed = true;
                }
            }
        }
        b = arr;
    } while (changed);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> arr[i][j];
            }
        }

        stabilize_matrix(arr, n, m);

        for (const auto &row : arr)
        {
            for (int val : row)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
