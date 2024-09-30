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
        int n,k;
        cin>>n>>k;
        ll maxi = LONG_LONG_MIN;
        ll sum = 0;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            maxi = max(maxi,a[i]);
        }

        ll sumk = sum+k;
        ll m = n;
        ll ans = 1;
        while(m>1){

            ll temp1 = sumk/m;
            if(m*temp1>=sum && temp1>=maxi){
                ans = m;
                break;                
            }
            m--;

        }

        cout<<ans<<"\n";

        
    }
       return 0;
}