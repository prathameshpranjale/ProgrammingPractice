#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()
                                
bool isPerfectSquare(int x)
{
    int s = static_cast<int>(sqrt(x));
    return s * s == x;
}

bool isBeautifulMatrix(const vector<vector<int>> &matrix, int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                if (matrix[i][j] != 1)
                {
                    return false;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
void processTestCase(int n, const string &s)
{
    if (!isPerfectSquare(n))
    {
        no;
        return;
    }

    int size = static_cast<int>(sqrt(n));
    vector<vector<int>> matrix(size, vector<int>(size));

    int index = 0;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            matrix[i][j] = s[index++] - '0'; // Convert char to int
        }
    }

    // Check if the matrix is beautiful
    if (isBeautifulMatrix(matrix, size))
    {
       yes;
    }
    else
    {
        no;
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
        processTestCase(n, s);
    }

    return 0;
}
