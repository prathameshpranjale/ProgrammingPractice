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
   while (t--)
   {
    /* code */
    int n,line;

    cin>>n>>line;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int diff = 0,prev = 0;
    for(int i=0;i<n;i++){
        diff = max(diff,arr[i]-prev);
        prev = arr[i];
    }

    diff = max(diff,2*(line-prev));
    cout<<diff<<"\n";
   }
   
       return 0;
}