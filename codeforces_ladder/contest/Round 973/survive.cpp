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
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> vec(n);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            vec[i] = a;
        }
        ll sum = 0;
        for(int i=0;i<n-2;i++){
            sum+=vec[i];
        }

        cout<<vec[n-1] - vec[n-2]+sum<<"\n";
    }

    return 0;
}
