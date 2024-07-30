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
   int matrix [5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){

            cin>>matrix[i][j];

            if(matrix[i][j] == 1){
                int i1 = i+1;
                int j1 = j+1;

                int ans = abs(3-i1) + abs(3-j1);
                cout<<ans<<endl;
            }
        }
    }
    
       return 0;
}