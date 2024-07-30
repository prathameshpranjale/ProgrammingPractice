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
   int test;
   cin>>test;
   while(test--){

    int x1,x2,x3;
    cin>>x1>>x2>>x3;

    int arr[3] = {x1,x2,x3};
    sort(arr,arr+3);

    int mid = arr[1];

    int ans = abs(arr[0]-mid) + abs(arr[1]-mid) + abs(arr[2]-mid);
    cout<<ans<<endl;
    
   }
       return 0;
}