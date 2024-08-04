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
    string s;
    
    cin>>s;
    // cout << s;
    int arr[26] ={0};
    for(int i=0;i<n;i++)
        arr[s[i]-'A']++;

    int ans = 0;
    for(int i=0;i<26;i++)
    {
       if(arr[i]>i)
        ans++;
    }

    cout<<ans<<endl;

   }
       return 0;
}