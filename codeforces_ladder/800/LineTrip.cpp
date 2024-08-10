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
        int n,line;

        cin>>n>>line;

        int station[n];
        for(int i=0;i<n;i++)
            cin>>station[i];
        
        int mtank = 0,prev = 0;
        for(int i=0;i<n;i++){
            int diff =abs(station[i]-prev);
            mtank = max(diff,mtank);
            prev = station[i];
        }


        int diff = abs(station[n-1] - line);
        mtank = max(mtank,diff*2);

        cout<<mtank<<"\n";


   }
       return 0;
}