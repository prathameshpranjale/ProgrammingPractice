#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()
                                

int main()
{
    FAST;
    int T;
    cin >> T;

    while (T--)
    {
        string s, t;
        cin >> s >> t;

        int ns = s.size();
        int nt = t.size();
        int questionCount = count(s.begin(), s.end(), '?');

        if (questionCount == nt)
        {
            // Case when the number of "?" is exactly the length of `t`
            cout << "YES" << endl;
            int tIndex = 0;
            for (int i = 0; i < ns; ++i)
            {
                if (s[i] == '?')
                {
                    s[i] = t[tIndex++];
                }
            }
            cout << s << endl;
        }
        else
        {
            // General case
            bool canshower = false;
            int j = 0; // Pointer for string `t`
            for (int i = 0; i < ns; i++)
            {
                if (j < nt && (s[i] == t[j] || s[i] == '?'))
                {
                    j++;
                }
            }

            if (j < nt)
            {
                // Not all characters of `t` were matched
                cout << "NO" << endl;
                continue;
            }

            // Construct the valid string by replacing "?" with 'a' (or t characters as necessary)
            j = 0; // Reset pointer for `t`
            for (int i = 0; i < ns; i++)
            {
                if (j < nt && (s[i] == t[j] || s[i] == '?'))
                {
                    if (s[i] == '?')
                        s[i] = t[j];
                    j++;
                }
                if (s[i] == '?')
                {
                    s[i] = 'a'; // Replace remaining "?" with 'a'
                }
            }

            // Output the result
            cout << "YES" << endl;
            cout << s << endl;
        }
    }

    return 0;
}
