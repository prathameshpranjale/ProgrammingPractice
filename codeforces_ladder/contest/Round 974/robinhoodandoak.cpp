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
    ll n,k;
    cin>>n>>k;

    ll low = max(1LL, n - k + 1);
    ll odd = 0;
    if (low % 2 == 0)
    {
        if (low + 1 <= n)
            odd = (n - (low + 1)) / 2 + 1;
    }
    else
            odd = (n - low) / 2 + 1;
    

    if (odd % 2 == 0)
        yes;
    else
        no;

   }

    return 0;
    
}