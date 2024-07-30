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
    int k;
    cin>>k;

    int cards[n];
    for(int i=0;i<n;i++){
        cin>>cards[i];
    }

    int ans = n;
    // first cas
    unordered_map<int,int>ct;
    // keeping count of cards using frequency counter

    for(const auto& c: cards){

        if(ct.find(c)!=ct.end()){
            ct[c]+=1;
        }
        else{
            ct[c] = 1;
        }

        /* since the total number of card getting decreased is exactly one 
        at each step and u cant do any operation if u have less than k cards with same number 
        so it is impossible to do any further operations         */
        if (ct[c] >= k)
        {
            ans = k - 1;
            break; // Exiting early as the condition is met
        }
    }

    cout<<ans<<endl;

   }
    
    
    
    
       return 0;
}