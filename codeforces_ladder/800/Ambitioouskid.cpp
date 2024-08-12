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
   int n;
   cin>>n;
    
    int mini = INT_MAX;
   for(int i=0;i<n;i++){
       int a;
       cin >> a;

       if (a == 0)
       {
           cout << 0 << "\n";
           return 0;
    }
    mini = min(abs(a), mini);
   }

   cout << mini << "\n";

   return 0;
}