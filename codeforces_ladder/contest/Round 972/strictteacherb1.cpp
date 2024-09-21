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

        ll size,teach,q;
        cin>>size>>teach>>q;

        vector<ll>teachpos;
        for(int i=0;i<teach;i++)
        {
            int a;
            cin>>a;
            teachpos.push_back(a);
        }

        

        sort(teachpos.begin(),teachpos.end());
        while(q--){
            int dvd;
            cin >> dvd;
            auto nearteacher = lower_bound(teachpos.begin(), teachpos.end(), dvd);

            ll ans;

            if (nearteacher == teachpos.begin())
                ans = *nearteacher - 1;
            else if (nearteacher == teachpos.end())
                ans = size - teachpos.back();
            else
            {
                ll left = *nearteacher - 1;
                ll right = *nearteacher;
                ans = (right - left) / 2;
            }
            cout << ans << "\n";
        }
      
        
   }
       return 0;
}