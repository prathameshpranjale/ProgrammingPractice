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
        int robingold = 0;
        int peoplehelped = 0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;

            if(a>=k)
                robingold+=a;
            
            if(a  == 0 && robingold>0){
                peoplehelped++;
                robingold--;
            }
        }

        cout<<peoplehelped<<"\n";
   }
       return 0;
}