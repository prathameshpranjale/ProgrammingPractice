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
    stack<int>st;
    for(int i=0;i<n;i++){
        for(int j=1;j<5;j++){
            char a;
            cin>>a;

            if(a == '#')
                st.push(j);
        }
    }

    while(!st.empty()){
        int t = st.top();
        st.pop();
        cout<<t<<" ";
    }
    cout<<"\n";

   }
       return 0;
}