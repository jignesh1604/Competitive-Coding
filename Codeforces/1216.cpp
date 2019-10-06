/*
link. https://codeforces.com/contest/1216/problem/D
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{  unsigned long long int n;
   cin>>n;
   unsigned long long int a[n],maxx=0;
   for(long int i=0;i<n;i++) {
       cin >> a[i];
       if(a[i]>maxx)
       {
           maxx=a[i];
       }
   }
   for(long int i=0;i<n;i++)
   {
       a[i]=maxx-a[i];
   }
   sort(a,a+n);
   unsigned long long int gcd=a[n-1],sum=0;
   for(long int i=0;i<n;i++)
   {
       sum=sum+a[i];
       gcd=__gcd(gcd,a[i]);
   }
   cout<<sum/gcd<<" "<<gcd;
    return 0;
}
