/*
https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/
https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication/0

*/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define MOD ll(1e9L+7)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 
#define t2() ll tt2; cin>>tt2; for(ll tti=1;tti<=tt2;tti++)
#define printcj "Case #"<<tti<<": "
#define debug1(x) cerr << #x << " = " << x << '\n';
#define debug2(x, y) cerr << #x << " = " << x << "   " << #y << " = " << y << "\n";
#define debug3(x,y,z) cout<<"for "<<#x <<" =  "<<(x)<<" "<<#y<<" = "<<(y)<<" ans is "<<#z<<" "<<(z)<<"\n"; 

const ll sz=101;
ll dp[sz][sz],a[sz];

// a[i-1]*a[i] represents size of  'i'th matrix
ll solve(ll l,ll r)
{
    if(l==r) return 0;
    if(dp[l][r]!=-1) return dp[l][r];

    ll ans=LLONG_MAX;
    for(ll i=l;i<r;i++)
        ans = min(ans , solve(l,i) + solve(i+1,r) + a[l-1]*a[i]*a[r] );
    return dp[l][r]=ans;
}
int main()
{
    fastio;
    ll i,j,n,k;
    t()
    {
        cin>>n;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=1;i<n;i++)for(j=1;j<n;j++) dp[i][j] = -1;
        cout<<solve(1,n-1)<<'\n';
        

    }
}
