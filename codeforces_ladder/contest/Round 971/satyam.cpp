#include <bits/stdc++.h>
using namespace std;

int countRightTriangles(int n, vector<pair<int, int>> &points)
{
    unordered_set<int> x_axis, non_x_axis;
    int count = 0;

    for (auto &point : points)
    {
        if (point.second == 0)
        { // y == 0, point is on the X-axis
            x_axis.insert(point.first);
        }
        else
        { // y != 0, point is off the X-axis
            non_x_axis.insert(point.first);
        }
    }

    for (int x : x_axis)
    {
        if (non_x_axis.find(x) != non_x_axis.end())
        {
            count += (x_axis.size() - 1) * non_x_axis.size();
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> points(n);

        for (int i = 0; i < n; i++)
        {
            cin >> points[i].first >> points[i].second;
        }

        cout << countRightTriangles(n, points) << endl;
    }

    return 0;
}