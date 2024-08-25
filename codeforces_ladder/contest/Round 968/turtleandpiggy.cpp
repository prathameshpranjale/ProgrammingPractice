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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i] = a;
    }

    sort(arr.begin(),arr.end());
    cout<<arr[n/2]<<endl;
   }
       return 0;
}