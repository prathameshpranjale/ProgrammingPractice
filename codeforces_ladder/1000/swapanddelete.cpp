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
    string s;
    cin>>s;

    
    int one=0,zero=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            zero++;
        }else{
            one++;
        }

    }
   

    int ans = 0;
    if(zero == one){
        ans = 0;
    }
    else if (one == s.size())
        ans = one;
    else if(zero == s.size())
        ans = zero;
    else{
        
        for(int i=0;i<s.length();i++){

            if(s[i] == '0'){
                one--;
            }else{
                zero--;
            }

            if(s[i+1]=='0' && one == 0 ){
                ans = zero;
                break;
            }
            else if (s[i + 1] == '1' && zero == 0){
                ans = one;
                break;
            }
        }
    }
    

    cout << ans << "\n";

   }
       return 0;
}