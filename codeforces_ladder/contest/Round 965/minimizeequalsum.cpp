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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arrq[n];
    for(int i=0;i<n;i++){
        arrq[i]= (arr[(i+1)%n]);

    }

    for(auto x:arrq){
        cout<<x<<" ";
    }
    cout<<"\n";

   }
       return 0;
}