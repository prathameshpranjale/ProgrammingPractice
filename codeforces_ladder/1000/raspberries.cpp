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
    bool flag = false;
    int max_mod = INT_MIN;
    vector<int>ans;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a%k == 0)
                flag  = true;
            
            max_mod = max(max_mod,a%k);
            ans.push_back(a);
            
        }


        if(flag){
            cout<<0<<"\n";
        }else{
            if(k!=4)
                cout<<k-max_mod<<"\n";
            else{
                int two = 0;
        
                for(int i=0;i<n;i++){

                    if(ans[i]%2 == 0){
                        two++;
                    }
                }

                
                    int ans = max(0,2-two); // this is important case here 
                    
                    ans = min(ans,4-max_mod);
                    cout<<ans<<"\n";
                


            }

        }
   }
       return 0;
}