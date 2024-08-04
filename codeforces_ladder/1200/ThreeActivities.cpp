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
    int winterdays;
    cin>>winterdays;

    vector<pair<int,int>>a(winterdays),b(winterdays),c(winterdays);

    for(int i=0;i<winterdays;i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    for (int i = 0; i < winterdays; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }
    for (int i = 0; i < winterdays; i++)
    {
        cin >> c[i].first;
        c[i].second = i;
    }

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());

      
      
    int max_friends = 0;
    for(int i=0;i<min(3,winterdays);i++){
        for(int j=0;j<min(3,winterdays);j++){
            for(int k=0;k<min(3,winterdays);k++){

                int x = a[i].second,y = b[j].second,z=c[k].second;
                if(x!=y && x!=z && y!=z){
                    int sum = a[i].first+b[j].first+c[k].first;
                    max_friends = max(sum,max_friends);
                }
            }
        }
    }

    cout<<max_friends<<endl;

    
   }
       return 0;
}