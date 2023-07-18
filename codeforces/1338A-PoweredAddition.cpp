#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long o = -1e9-748;

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void solve()
{
    int n;
    cin>>n;

    ll mx = o,ans=0,x;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<mx)
        {
            ans=max(mx-x,ans);
        }
        mx=max(x,mx);
    }

    if(ans!=0){ans = log2(ans);++ans;}


    cout<<ans<<"\n"; 

}


int main()
{
    fastio;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}