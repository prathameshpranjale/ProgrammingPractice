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
   while(t--){
        int n;
        cin>>n;

        vector<int>arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            if(i && arr.back() > x){
                arr.push_back(1);
            }
            
            arr.push_back(x);
        }

        cout<<arr.size()<<"\n";
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<"\n";
   }
       return 0;
}