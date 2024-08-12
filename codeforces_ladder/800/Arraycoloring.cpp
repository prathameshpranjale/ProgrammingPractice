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
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a%2 ==1)
            cnt++;
    }

    if(cnt%2==0){
        yes;
    }else{
        no;
    }
   }
       return 0;
}