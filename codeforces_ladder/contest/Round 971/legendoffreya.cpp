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
    ll x,y,k;
    cin>>x>>y>>k;

    ll x1 = (x + k - 1) / k; // Equivalent to ceil(x / k)
    ll y1 = (y + k - 1) / k;

    ll v = max(x1,y1);
    // cout<<" v ="<<x1<<" "<<y1<<"\n";
    ll ans = 2*v;
    if(x1 > y1) ans--;

    cout << ans << "\n";
   }
       return 0;
}