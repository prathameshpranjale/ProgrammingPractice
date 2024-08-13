#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()

int main()
{
    FAST;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s = to_string(n);
        bool flag = false;

        if(s.size()<3){
            no;
            continue;
        }

        if (s.size() > 2 && s[0] == '1' && s[1] == '0')
        {
            string val = s.substr(2);
            int num = stoi(val);

            if (num >= 2 && s[2]!='0')
            {
                flag = true;
            }
        }

        if (flag)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}