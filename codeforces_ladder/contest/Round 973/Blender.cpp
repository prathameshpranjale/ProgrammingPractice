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
    int fruits,zhan_canput,blender_fruit;
    cin>>fruits>>zhan_canput>>blender_fruit;


    int mini = min(zhan_canput,blender_fruit);

    int answer = fruits/mini;

    if(fruits%mini == 0)
        cout<<answer<<"\n";
    else    
        cout<<answer+1<<"\n";
    
   }
       return 0;
}