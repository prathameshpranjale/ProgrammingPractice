#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST (ios_base::sync_with_stdio(false), cin.tie(NULL))

void processTestCase(int numPoints, int numQueries, const vector<int> &pointCoordinates, const vector<int> &queryCounts, vector<ll> &answers)
{
    unordered_map<ll, ll> segmentCoverage; 

    for (int index = 1; index <= numPoints; ++index)
    {
       
        ll coverageCount = (ll)(index - 1) * (numPoints - index + 1) + (numPoints - index);
        segmentCoverage[coverageCount]++;

      
        if (index < numPoints)
        {
            ll gap = (ll)(pointCoordinates[index] - pointCoordinates[index - 1] - 1);
            if (gap > 0)
            {
               
                ll coverageBetween = (ll)index * (numPoints - index);
                segmentCoverage[coverageBetween] += gap;
            }
        }
    }

    for (const int &query : queryCounts)
    {
        answers.push_back(segmentCoverage[query]); 
    }
}

int main()
{
    FAST;

    int testCases;
    cin >> testCases;
    vector<vector<ll>> results; 

    for (int i = 0; i < testCases; ++i)
    {
        int numPoints, numQueries;
        cin >> numPoints >> numQueries;

        vector<int> pointCoordinates(numPoints);
        for (int j = 0; j < numPoints; ++j)
        {
            cin >> pointCoordinates[j];
        }

        vector<int> queryCounts(numQueries);
        for (int j = 0; j < numQueries; ++j)
        {
            cin >> queryCounts[j];
        }

        vector<ll> answers; 
        processTestCase(numPoints, numQueries, pointCoordinates, queryCounts, answers);
        results.push_back(answers); 
    }

    for (const auto &result : results)
    {
        for (size_t j = 0; j < result.size(); ++j)
        {
            cout << result[j];
            if (j < result.size() - 1)
            {
                cout << " "; 
            }
        }
        cout << "\n"; 
    }

    return 0;
}
