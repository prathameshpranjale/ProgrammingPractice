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

   while (t--)
   {
    /* code */

    int n;
    cin>>n;

    string s;
    cin>>s;
    int cnt = 0;
    int maxcnt = 0;
    bool flag = true;
    for(auto x:s){

        if(x == '.'){
            maxcnt++;
            cnt++;
        }
        
        if(cnt >=3){
                flag = false;
                cout<<2<<"\n";
                break;
        }

        if(x=='#')
            cnt = 0;
    }
    


    if(flag&& maxcnt>0){
        cout<<maxcnt<<"\n";
    }
    
    if(maxcnt == 0){
        cout<<0<<"\n";
    }


   }
   
       return 0;
}