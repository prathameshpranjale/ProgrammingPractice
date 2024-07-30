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
        int n, k;
        cin >> n >> k;

        char **grid = new char *[n];
        for (int i = 0; i < n; ++i)
        {
            grid[i] = new char[n + 1]; 
        }

        for (int i = 0; i < n; i++)
        {
            cin >> grid[i];
        }

        int size = n / k;

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << grid[i * k][j * k];
            }
            cout << endl;
        }

        for (int i = 0; i < n; ++i)
        {
            delete[] grid[i];
        }
        delete[] grid;
    }

    return 0;
}
