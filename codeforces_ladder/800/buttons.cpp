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

   while (t--)
   {
    /* code */
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a==b){
        if (c % 2 == 1)
        {
            cout << "First" << "\n";
        }
        else
        {
            cout << "Second" << "\n";
        }
    }else{

        if(a>b){
            cout << "First" << "\n";
        }else{
            cout << "Second" << "\n";
        }
    }
   }
   
       return 0;
}