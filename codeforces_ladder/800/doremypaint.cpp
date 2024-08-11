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
   int t;
   cin>>t;
   while(t--){

        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        
        unordered_map<int,int>mp;
        for(int i =0;i<n;i++){
            mp[arr[i]]++;
        }

        if (n == 2 )
        {
            yes;
            continue;
        }
        bool flag = false;
        for(auto x:mp){

            if(x.second ==n/2 || n == x.second){
                flag  = true;
                break;
            }
        }

        if(flag && mp.size()<=2){
            yes;
        }
        else{
            no;
        }
           
        
        

   }
       return 0;
}