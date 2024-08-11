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

    int a;
    int sum = 0;
    for(int i=0;i<n-1;i++){
        cin >> a;
        sum+=a;
    }

    cout<<0-(sum)<<"\n";
      
    
   }
       return 0;
}