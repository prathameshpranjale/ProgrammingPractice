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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

    int first = 0,count_f=0;
    for(int i=0;i<n;i+=2){
        first = max(arr[i],first);
        count_f++;
    }
    int second = 0, count_s = 0;
    for (int i = 1; i < n; i += 2)
    {
        second = max(arr[i], second);
        count_s++;
    }

    int val1 = first+count_f;
    int val2 = second+count_s;

    cout<<max(val1,val2)<<"\n";
   }
       return 0;
}