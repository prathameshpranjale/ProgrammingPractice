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
    int num;
    cin>>num;


    if(num%4 == 0){
        cout<<num/4<<endl;
        
    }
    else{
        int rem = num%4;
        int cow = num/4;
        int chick = rem/2;

        cout<<cow+chick<<endl;
    }
   }
       return 0;
}