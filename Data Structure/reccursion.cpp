#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()


int factorial(int num,vector<int>&dp){
    // now this is basic recursion 
    // to modify it into  dp we will use dp array 
    // if(num == 0 || num == 1){
    //     return 1;
    // }

    for(int i=1;i<=num;i++){
        dp[i] = i * dp[i - 1];
    }
  
    return dp[num];
}


void reverse(string &str,int i,int j){

    if(i >= j){
        return ;
    }
    swap(str[i++], str[j--]);
    reverse(str,i,j);

}
int main()
{
   FAST;

    //cout<<factorial(5)<<endl;
    // cout<<factorial(15)<<endl;
   
    // int n;
    // n = 10;
    // vector<int>dp(n+1,-1);
    // dp[0] = 1;
    // cout<<factorial(n,dp)<<endl;


    string str = "abcdfgehijklmnopq";
    cout<<str<<endl;
    reverse(str,0,str.length()-1);
    cout<<str<<endl;
       return 0;
}