#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll t;cin>>t;while(t--) 

int main()
{ 
    fastio;
    ll i,n,j,k;
    cin>>n>>k;
    vector<ll>a(n),dp(n,INT_MAX);
    for(i=0;i<n;i++) cin>>a[i];
    dp[0]=0;
    for(i=1;i<n;i++)
    {
        for(j=min(i,k);j>0;j--)
            dp[i]=min(dp[i],dp[i-j]+abs(a[i]-a[i-j]));
    }
    cout<<dp[n-1];
    
    
    
       
}
