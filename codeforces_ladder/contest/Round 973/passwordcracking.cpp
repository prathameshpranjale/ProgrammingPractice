#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()
                                
void solve(){
             
}
int main()
{
   FAST;
   int t;
   cin>>t;
   while(t--){
            int n;
            cin>>n;

            string ans = "";

            while(ans.size()!=n){

                cout<<"? "<<ans+"1"<<"\n";
                cout.flush();


                int response;
                cin>>response;

                if(response){
                    ans+='1';
                    continue;
                }

                cout << "? " << ans + "0" << "\n";
                cout.flush();

                int response1;
                cin >> response1;

                if(response1){
                    ans+='0';
                    continue;
                }

                cout << "? " << "1"+ans  << "\n";
                cout.flush();

                int response2;
                cin >> response2;

                if(response2){
                    ans  = '1' + ans;
                    continue;
                }else{
                    ans = '0' + ans;
                }

            }

            cout<<"! "<<ans<<"\n";
            cout.flush();
      }
       return 0;
}