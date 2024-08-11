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
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if((arr[i]+arr[j])%x == 0 && abs(arr[j]-arr[i])%y == 0){
                count++;

                
            }
        }
    }

    cout<<count<<"\n";

   }
       return 0;
}