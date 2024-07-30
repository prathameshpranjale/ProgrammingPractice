#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;

    vector<int>soldier(n);

    for(int i=0;i<n;i++){
        cin>>soldier[i];
    }

    int m = 1001,distance = 0;

    distance = abs(soldier[0] - soldier[n-1]);
    m = min(distance,m);
    int idx1 = 1, idx2 = n;

    for(int i=0;i<n-1;i++){

        distance = abs(soldier[i]-soldier[i+1]);

        if(m>distance){
            m = distance;
            idx1 = i+1;
            idx2 = i+2;
        }
        
    }

    cout<<idx1<<" "<<idx2<<endl;

    return 0;
}