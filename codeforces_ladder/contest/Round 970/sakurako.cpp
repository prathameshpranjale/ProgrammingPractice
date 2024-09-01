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
    int a,b;
    cin>>a>>b;

    if(a%2==0 && b%2==0)
        yes;
    else if(a!=0 && a%2==0 && b%2 ==1)
        yes;
    else 
        no;
   }
       return 0;
}