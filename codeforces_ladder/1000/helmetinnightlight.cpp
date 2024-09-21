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
    int n,cost;
    cin>>n>>cost;
    vector<int>arr;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }

    vector<pair<ll,ll>>vec;

        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            int a = arr[i];

            vec.push_back({b,a});
        }
    // ll finalcost = 0;    
    vec.push_back({cost,n+1});
    sort(vec.begin(),vec.end());
   
    ll totalcost = cost;
    int people = 1;

    int idx = 0;
    while(people<n){
        int left = n - people;

        if(vec[idx].second<=left){
            people+=vec[idx].second;
            totalcost+=vec[idx].first*vec[idx].second;
        }else{
            people += left;
            totalcost += vec[idx].first * left;
        }
        idx++;
    }

    cout<<totalcost<<"\n";


    


   }
       return 0;
}