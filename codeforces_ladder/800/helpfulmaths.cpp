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
   string value;
   cin>>value;
    vector<char>ans;
   for(int i=0;i<value.length();i++)
   {
        if(value[i]>='0' && value[i]<='9'){
            ans.push_back(value[i]);
        }
   }
   sort(ans.begin(),ans.end());
   string res = "";

   for(int i=0;i<ans.size();i++){

        res+=ans[i];

        if(i<ans.size()-1){
            res+='+';
        }
   }

   cout<<res<<endl;
       return 0;
}