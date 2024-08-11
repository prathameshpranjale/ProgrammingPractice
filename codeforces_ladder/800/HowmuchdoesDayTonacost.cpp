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

    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    unordered_map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        /* code */
        mp[arr[i]]++;
    }
    
    
    if(mp.find(k)!=mp.end()){
        yes;
    }else{
        no;
    }


   }
       return 0;
}