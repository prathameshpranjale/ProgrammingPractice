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
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool sorted = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sorted = false;
        }
    }

    if(sorted){
        cout<<0<<endl;
    }
    else{
            if(n==4){
                cout<<1<<endl;
            }else{
                cout << n / 2 << endl;
            }
        }
    }


   
       return 0;
}