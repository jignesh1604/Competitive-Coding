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
    cin>>n;
    vector<vector<ll>>a(n,vector<ll>(3));
    vector<vector<ll>>dp(n,vector<ll>(3,0));
    for(i=0;i<n;i++) cin>>a[i][0]>>a[i][1]>>a[i][2];
    dp[0][0]=a[0][0];
    dp[0][1]=a[0][1];
    dp[0][2]=a[0][2];
    for(i=1;i<n;i++)
    {
        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
                if(j!=k)
                    dp[i][j]=max(dp[i][j],dp[i-1][k]+a[i][j]);
    }
    ll ans=0;
    for(i=0;i<3;i++)
        ans=max(ans,dp[n-1][i]);
    cout<<ans;
    
       
}
