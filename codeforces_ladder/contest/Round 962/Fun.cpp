#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int count = 0;

        // Iterate over all possible values of a
        for (int a = 1; a <= x; ++a)
        {
            // Given a, iterate over all possible values of b
            for (int b = 1; b + a <= x; ++b)
            {
                // Given a and b, calculate the maximum possible value of c
                // satisfying both conditions.
                int c_max = x - a - b;
                if (c_max <= 0)
                    break; // If c_max is not positive, stop further checking
    
                // Calculate the upper bound for c based on the product constraint
                for (int c = 1; c <= c_max; ++c)
                {
                    if (a * b + a * c + b * c <= n)
                    {
                        ++count;
                    }
                    else
                    {
                        break; // Early termination if the product exceeds n
                    }
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}
