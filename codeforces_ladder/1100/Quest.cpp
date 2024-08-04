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
   ll t;
   cin>>t;

   while(t--){
    ll n,k;
    cin>>n>>k;
     vector<ll>a(n),b(n),sum(n),maxb(n);
    
    cin>>a[0];
    sum[0] = a[0];
     for(ll i=1;i<n;i++){
        cin>>a[i];
        sum[i] = a[i]+sum[i-1];
     }
    
    cin>>b[0];
    maxb[0] = b[0];
     for (ll i = 1; i < n; i++){
         cin >> b[i];
         maxb[i] = max(maxb[i-1],b[i]);
     }

    cout<<"maxb"<<endl;
     for(auto x:maxb)
        cout<<x<<" ";
    cout<<"\nans\n";    
    ll ans = INT_MIN;
    k--;
    for(ll i=0;i<n;i++)
    {
        ans = max(ans,sum[i] + (k-i)*maxb[i]);

        if(i==k)
            break;
    }

    cout<<ans<<endl;
   }
       return 0;
}