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
   int n;
   cin>>n;

   vector<string>v(n);

   for(int i=0;i<n;i++){
        cin>>v[i];

   }

//    cout<<"outpput"<<endl;

   for(int i=0;i<n;i++){
        if(v[i].length()>10){
            string s = v[i];
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
        else{
            cout<<v[i]<<endl;
        }
   }

 

       return 0;
}