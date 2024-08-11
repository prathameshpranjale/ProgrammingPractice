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
   while(t--){

        int n,m;
        cin>>n>>m;

        string x,s;
        cin>>x>>s;

        bool flag = false;        
        int count = 0;

        for(int i=0;i<6;i++)
        {
            if (x.find(s) != string::npos)
            {

                flag = true;
                break;
            }

            x += x;
            count++;
        }

        if(!flag){
            cout<<-1<<"\n";
        }else{
            cout << count << "\n";
        }
   }
       return 0;
}