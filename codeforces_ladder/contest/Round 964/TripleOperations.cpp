#include <bits/stdc++.h>
using namespace std;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int operationsToZero(int num)
{
    int count = 0;
    while (num > 0)
    {
        if (num % 3 == 0)
        {
            num /= 3;
        }
        else
        {
            num -= 1;
        }
        count++;
    }
    return count;
}

int main()
{
    FAST;
    int t;
    cin >> t;   

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int maxOperations = 0;
        for (int i = l; i <= r; ++i)
        {
            maxOperations = max(maxOperations, operationsToZero(i));
        }

        cout << maxOperations << "\n";
    }

    return 0;
}
