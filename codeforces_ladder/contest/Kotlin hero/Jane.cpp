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

            vector<int>arr(n);
            for(int i=0;i<n;i++)
                cin>>arr[i];
            
            if(is_sorted(arr.begin(),arr.end())){
                cout<<arr[n-2]<<"\n";
            }else{
                cout << "Ambiguous"<<"\n";
            }
      }
       return 0;
}