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

    int arr[n];
    for(auto i=0;i<n;i++)
        cin>>arr[i];
    

    if(arr[0] == arr[n-1]){
        no;
    }
    else{

        // here we are using the concept like color all red so as per range def 
        // max - min keeping one big and other range of only single character length so

        // diff will be very large and we win by far  hehe kkoko 
        string ans = "";
        for(auto i=0;i<n;i++){
            ans+='R';
        }
        ans[1] ='B';
        yes;
        cout<<ans<<endl;
    }


   }
       return 0;
}