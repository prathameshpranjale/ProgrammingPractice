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
    int x,y,k;

    cin>>x>>y>>k;
    
    vector<pair<int,int>>ans;
    
    if(k%2 == 1){
        ans.push_back({x,y});
    }

    for(int i=1;i<=k/2;i++){
        ans.push_back({x-i,y-i});
    }
    for(int i=1;i<=k/2;i++)
        ans.push_back({x+i,y+i});
    

    for(auto x:ans){
        cout<<x.first<<" "<<x.second<<"\n";
    }


  
   }
       return 0;
}