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

    ll a[2];
    ll b[2];

    cin>>a[0]>>a[1]>>b[0]>>b[1];
    int suneetwins = 0;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int suneet = 0;
            int slavic = 0;

            // First round comparisons
            if (a[i] > b[j])
                suneet++;
            if (a[i] < b[j])
                slavic++;

            // Second round comparisons
            if (a[1 - i] > b[1 - j])
                suneet++;
            if (a[1 - i] < b[1 - j])
                slavic++;

            // Check if Suneet wins more rounds
            if (suneet > slavic)
                suneetwins++;
        }
    }

    cout<<suneetwins<<"\n";

    

    // cout<<count<<endl;
   }
       return 0;
}