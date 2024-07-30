#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define FAST (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define sz(x) (int)(x).size()

// Function to calculate the typing time for a given string
int calculate_typing_time(const string &s)
{
    int time = 2; // time for the first character
    for (size_t i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            time += 1;
        }
        else
        {
            time += 2;
        }
    }
    return time;
}

int main()
{
    FAST;

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int max_time = 0;
        string best_password = "";

        for (size_t i = 0; i <= s.size(); ++i)
        {
            for (char c = 'a'; c <= 'z'; ++c)
            {
                string new_s = s.substr(0, i) + c + s.substr(i);
                int time = calculate_typing_time(new_s);
                if (time > max_time)
                {
                    max_time = time;
                    best_password = new_s;
                }
            }
        }

        cout << best_password << endl;
    }

    return 0;
}
