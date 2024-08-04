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
        int k;
        cin>>k;

        vector<int>arr(n);
        for(int i=1;i<=n;i++)
            arr[i-1] = i;
        
        
        sort(arr.rbegin(),arr.rend());
        sort(arr.begin(),arr.begin()+k+1);

        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        // cout<<endl;
   }
       return 0;
}