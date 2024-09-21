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
    string ans = "aeiou";
    string s = "";
    int q = n/5;
    int r = n%5;
    for(int i=0;i<5;i++){
        for(int j=0;j<q+(i<r?1:0);j++){
            s+=ans[i];
        }
    }

    cout<<s<<"\n";

   }
       return 0;
}