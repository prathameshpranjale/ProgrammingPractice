#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'findStrings' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY w
 *  2. INTEGER_ARRAY queries
 */
set<string> allsubstrings(string str)
{
    set<string> ans;
    for (int i = 0; i < str.size(); i++)
    {
        string substrings = "";
        for (int j = i; j < str.size(); j++)
        {
            substrings += str[j];
            ans.insert(substrings);
        }
    }
    return ans;
}

vector<string> findStrings(vector<string> w, vector<int> queries)
{
    set<string> finalset;
    for (int i = 0; i < w.size(); i++)
    {
        set<string> a = allsubstrings(w[i]);
        finalset.insert(a.begin(), a.end());
    }

    // Convert the set to a vector (already sorted)
    vector<string> result(finalset.begin(), finalset.end());

    vector<string> ans;
    for (int i = 0; i < queries.size(); i++)
    {
        if (queries[i] - 1 < result.size())
        {
            ans.push_back(result[queries[i] - 1]);
        }
        else
        {
            ans.push_back("INVALID");
        }
    }

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string w_count_temp;
    getline(cin, w_count_temp);

    int w_count = stoi(ltrim(rtrim(w_count_temp)));

    vector<string> w(w_count);

    for (int i = 0; i < w_count; i++)
    {
        string w_item;
        getline(cin, w_item);

        w[i] = w_item;
    }

    string queries_count_temp;
    getline(cin, queries_count_temp);

    int queries_count = stoi(ltrim(rtrim(queries_count_temp)));

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++)
    {
        string queries_item_temp;
        getline(cin, queries_item_temp);

        int queries_item = stoi(ltrim(rtrim(queries_item_temp)));

        queries[i] = queries_item;
    }

    vector<string> result = findStrings(w, queries);

    for (size_t i = 0; i < result.size(); i++)
    {
        fout << result[i];

        if (i != result.size() - 1)
        {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
