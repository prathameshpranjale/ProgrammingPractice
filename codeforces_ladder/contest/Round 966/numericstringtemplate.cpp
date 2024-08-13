#include<bits/stdc++.h>

using namespace std;
#define ll                long long
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define FAST              (ios_base::sync_with_stdio(false),cin.tie(NULL))
#define sz(x)             (int)(x).size()

bool solve(string &pattern, vector<int> &numbers)
{

    unordered_map<int, char> numToChar;
    unordered_map<char, int> charToNum;

    for (int i = 0; i < numbers.size(); i++)
    {
        int num = numbers[i];
        char ch = pattern[i];

        if (numToChar.count(num) && numToChar[num] != ch)
            return false;

        if (charToNum.count(ch) && charToNum[ch] != num)
            return false;

        numToChar[num] = ch;
        charToNum[ch] = num;
    }

    return true;
}
int main()
{
   FAST;
   int t;
   cin>>t;

   while(t--){

    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int m;
    cin >> m;
    vector<string> vec(m);
    for (int i = 0; i < m; i++)
    {
        string c;
        cin >> c;
        vec[i] = c;
    }


    vector<bool>ans(m);
    for(int i=0;i<m;i++){
        
        if(arr.size()==vec[i].length()){
            ans[i] = solve(vec[i], arr);
        }else{
            ans[i] = false;
        }
    }


    for(int i=0;i<m;i++){
        if(ans[i]){
            yes;
        }else{
            no;
        }
    }




   }
    
       return 0;
}