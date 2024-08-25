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

    int n;
    cin>>n;
    string s;
    cin>>s;


    if(s.size()>=n && s[0] !=s[n-1]){
        yes;
    }else{
        no;
    }
   }
       return 0;
}