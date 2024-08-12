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

    vector<int>arr,b,c;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;

        arr.push_back(a);
    }

    sort(arr.begin(),arr.end());

    if(arr[0] == arr.back()){
        cout<<-1<<"\n";
        continue;
    }else{

        int it = 0;
        while(arr[it] == arr[0]) it++;


        cout<<it<<" "<<n-it<<"\n";
        for(int i=0;i<it;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        for(int i = it;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }


   }
       return 0;
}