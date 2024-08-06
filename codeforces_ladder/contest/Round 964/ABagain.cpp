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

    ll n;
    cin>>n;
    ll sum = 0;
    while(n){
        sum = sum + n%10;
        n = n/10;
    }
    cout<<sum<<"\n";
   }
       return 0;
}