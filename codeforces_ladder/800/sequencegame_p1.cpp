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

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<int>ans;

    for(int i=0;i<n;i++){

        if (i != 0 && arr [i-1] > arr[i])
        {
            ans.push_back(1);
        }

        ans.push_back(arr[i]);
    }

    cout<<ans.size()<<"\n";
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<"\n";

    
   }
       return 0;
}