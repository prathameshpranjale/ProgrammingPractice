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
   string name;
   cin>>name;
    int n = name.length();
   unordered_map<char,int>mp;
   for(int i=0;i<n;i++){
        mp[name[i]]++;
   }

   if(mp.size()%2 == 0){
       cout <<"CHAT WITH HER!"<<endl;
   }
   else{
       cout << "IGNORE HIM!"<<endl;
   }
       return 0;
}