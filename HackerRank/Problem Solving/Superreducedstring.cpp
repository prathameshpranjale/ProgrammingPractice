#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {


    string ans;
    for(int i=0;i<s.length();i++){
        
        if(ans.back() == s[i]){
            ans.pop_back();
        }else{
            ans.push_back(s[i]);
        }
    }
    
    if(ans.size() == 0)
        return "Empty String";
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
