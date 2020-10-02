// article - https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/

// practice - https://practice.geeksforgeeks.org/problems/longest-common-subsequence/0

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 

const ll MAX=1e5+1L;
const ll inf=1e18L;
int main()
{
    fastio;
    t()
    {
        ll n,m,i,j;
        string s,t;
        cin>>n>>m;
        cin>>s>>t;
        //dp[i][j] = LCS in s[-1,i] and t[-1,j];
        //NOTE :  string is 0 based , dp is 1 based   
        vector<vector<ll>>dp(n+1,vector<ll>(m+1,0));
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                dp[i][j]=max({dp[i-1][j],dp[i][j-1],dp[i-1][j-1] + (s[i-1]==t[j-1]) });  
        
        cout<<dp[n][m]<<"\n";
    }
    

    
}
