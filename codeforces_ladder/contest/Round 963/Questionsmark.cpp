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
   int test;
   cin>>test;

   while(test--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        unordered_map<char,int>count;

        for(int i=0;i<s.length();i++)
            count[s[i]]++;

        int max_score = 0;
      

        for (char c : {'A', 'B', 'C', 'D'})
        {
            if (count[c] >= n)
            {
                max_score += n;
              
            }
            else
            {
                max_score += count[c];
                
            }
        }

        

        cout << max_score << endl;
    }
       return 0;
}