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

        vector<int>seats(n);
        for(int i=0;i<n;i++)
            cin>>seats[i];

        bool flag = false;
        set<int>occupied;
        occupied.insert(seats[0]);

        for(int i=1;i<n;i++){
            int curr = seats[i];

            if(occupied.count(curr-1) == 0 && occupied.count(curr+1) == 0){
                flag = true;
            }

            occupied.insert(seats[i]);
        }


        if(!flag)
            yes;
        else    
            no;
   }
       return 0;
}