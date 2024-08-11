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
        int n;
        cin>>n;
        vector<int> arr(n),brr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];

        for(int i=0;i<n;i++)
            cin>>brr[i];
        bool flag = false;

        if(arr == brr){
            cout<<"Bob\n";continue;
        }
        else{

            for(int i=0;i<n;i++){
                if(arr[i]!=brr[n-1-i])
                {
                    flag = true;
                    break;
                }
            }
        }
        

        if(flag){
            cout<<"Alice"<<"\n";
        }else{
            cout<<"Bob"<<"\n";
        }


        
    }
       return 0;
}