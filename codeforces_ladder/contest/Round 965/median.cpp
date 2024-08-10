#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the median of a vector
int calculateMedian(vector<int> &c)
{
    int n = c.size();
    sort(c.begin(), c.end());
    return c[(n - 1) / 2]; // ⌊(n-1)/2⌋ gives us the median index
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);
        vector<int> increments;

        // Input array a
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Input binary array b
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
            {
                increments.push_back(i);
            }
        }

        // Sort the indices by the values in a to prioritize larger values
        sort(increments.begin(), increments.end(), [&](int i, int j)
             { return a[i] > a[j]; });

        // Distribute k increments among the elements where b[i] = 1
        int increment_idx = 0;
        while (k > 0 && increment_idx < increments.size())
        {
            int idx = increments[increment_idx];
            // Increment a[idx] and reduce k
            a[idx]++;
            k--;
            // Move to next index in increments
            if (k == 0)
                break;
            if (increment_idx == increments.size() - 1)
                break;
            increment_idx++;
        }

        // Calculate the maximum score
        int maxScore = 0;
        for (int i = 0; i < n; i++)
        {
            vector<int> c = a;
            c.erase(c.begin() + i);                    // Remove a[i] to form the array c[i]
            int median_c = calculateMedian(c);         // Calculate the median of c[i]
            maxScore = max(maxScore, a[i] + median_c); // Update maxScore
        }

        cout << maxScore << endl; // Output the result for the current test case
    }

    return 0;
}
