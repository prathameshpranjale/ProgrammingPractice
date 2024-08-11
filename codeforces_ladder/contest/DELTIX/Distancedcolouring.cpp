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

    int t;
    cin >> t;
    while (t--)
    {
        int r, c, k;
        cin >> r >> c >> k;

        int rows = min(k, r); 
        int col = min(k, c); 
        int ans = rows * col;

        cout << ans << "\n";
    }
    return 0;
}
