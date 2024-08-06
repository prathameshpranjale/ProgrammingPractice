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
   ll test;
   cin>>test;

   while(test--)
   {
    ll n,K;
    cin>>n>>K;

    vector<ll>vec(n);
    for(ll i=0;i<n;i++)
        cin>>vec[i];
    
    ll maxxtime = *max_element(vec.begin(),vec.end());
    ll answer = -1;

    for (ll t = maxxtime;  t< maxxtime + K; t++)
    {
        bool all_switchonn = true;

        for(ll i=0;i<n;i++){
            if((t-vec[i])%(2*K)>=K){
                all_switchonn = false;
                break;
            }
        }
        if (all_switchonn == true)
        {
            answer = t;
            break;
        }
    }

    cout<<answer<<endl;
    

   }
       return 0;
}