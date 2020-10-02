  
//problem link : https://codeforces.com/contest/1152/problem/C
//Explanation : https://codeforces.com/blog/entry/66696

#include <bits/stdc++.h>
using namespace std;
#define sz(a) (a.size())
#define int long long
#define SYNC ios_base::sync_with_stdio(false), cin.tie(NULL);
#define all(c) c.begin(), c.end()
#define pb push_back
#define F first
#define S second
#define present(c, x) ((c).find(x) != (c).end())
#define cpresent(c, x) (find(all(c), x) != (c).end())
#define endl "\n"
#define bitcnt(n) __builtin_popcountll(n)
#define debug(x) cerr << #x << " = " << x << endl;
#define debug2(x, y) cerr << #x << " = " << x << " , " << #y << " = " << y << endl;
#define debug3(x,y,z) cerr<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<" , "<<#z<<" = "<<z<<endl;
const int M = 1000000007;
const int N = 3e5 + 5;

int mn = LLONG_MAX;
int a ,b , k;
void solve(int q) {
    int kx = (q - a % q)%q;
    int temp = (((b - a) * (a + kx)) )/__gcd(b-a , a + kx);
    if(temp == mn ) k = min(k , kx);
    if(temp < mn )
    {
        mn = temp;
        k = kx;
    }
}
signed main() {
    SYNC;
    cin >> a >> b;
    if (a > b) swap(a, b);
    int d =b - a;
    for (int i = 1; i * i <= d; i++) {
        if (d % i == 0) {
            solve(i);
            solve(d / i);
        }
    }
    cout << k << endl;
}
