#include<bits/stdc++.h>

using namespace std;

#define yes     cout<<"YES"<<endl;
#define no      count<<"NO"<<endl;

#define FAST (ios_base :: sync_with_stdio(false),cin.tie(NULL));




void solve()
{
    int n;
    cin>>n; 

    vector<int>v(n);

    for(auto &i: v)
        cin>>i;

    

    for(int i=0;i<n;i++){
        // 1 based numbering 
        int frnd = i+1;
        int bst = v[i];

        // lets not complement thing go for easy approach 
        if(v[bst-1] == frnd){
            cout<<2<<endl;
            return ;
        }

    }


    cout<<3<<endl;

    // as we need two friends in a partyy 
    // if there is one cycle then minimum 2 invitations are needed
    // else we just need to send 3 invitation i guess 


}

int main(){

    FAST;
    int TC;
    cin>>TC;

    while(TC--)
        solve();
        
    return 0;

}