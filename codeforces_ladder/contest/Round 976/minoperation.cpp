#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()
                                
void solve(){
             
}
int main()
{
   FAST;
   int t;
   cin>>t;
   while(t--){
         ll n,k;
         cin>>n>>k;

         if (k == 1 )
         {
             cout << n << "\n";
             continue;
         }
        ll m = n,ans = 0;
        while(m){
            ans += (m%k);
            m /=k;
        }
         cout<<ans<<"\n";

      }
       return 0;
}