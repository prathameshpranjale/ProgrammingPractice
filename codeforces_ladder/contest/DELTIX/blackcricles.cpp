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

    vector<pair<ll,ll>>circles;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        circles.push_back({a,b});
    }

    ll xs,ys,xe,ye;
    cin>>xs>>ys>>xe>>ye;

    ll distanceTotravel = ((abs(xe-xs)*abs(xe-xs))+(abs(ye-ys)*abs(ye-ys)));
    // vector<int>distancefromstart;
    // for(int i=0;i<n;i++){
    //     double dis = ((abs((circles[i].first-xs)*(circles[i].first-xs)) + abs((circles[i].second-ys)*(circles[i].second-ys))));
    //     distancefromstart.push_back(dis);
    // }

    vector<ll> distancefromend;
    for (ll i = 0; i < n; i++)
    {
        ll dis = ((abs((circles[i].first - xe) * (circles[i].first - xe)) + abs((circles[i].second - ye) * (circles[i].second - ye))));
        distancefromend.push_back(dis);
    }

    bool flag = false;
    for(ll i=0;i<n;i++){

        if(distancefromend[i]<=distanceTotravel){
            flag = true;
            break;
        }
    }

    if(flag){
        no;
    }else{
        yes;
    }

   }
       return 0;
}