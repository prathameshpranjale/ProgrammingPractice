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
   cin>>t;

   while (t--)
   {
       int n;
       cin >> n;
       string s;
       cin >> s;

       vector<int> freq(26, 0);

       // Calculate frequency of each character
       for (char c : s)
       {
           freq[c - 'a']++;
       }

       string result = "";

       // Constructing the string while spreading out characters
       while (result.size() < n)
       {
           for (int i = 0; i < 26; i++)
           {
               if (freq[i] > 0)
               {
                   result += (char)(i + 'a');
                   freq[i]--;
               }
           }
       }

       cout << result << "\n";
   }
       return 0;
}