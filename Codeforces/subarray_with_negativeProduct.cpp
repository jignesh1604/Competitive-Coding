/*
useful links - https://codeforces.com/contest/1215/problem/B
               https://www.geeksforgeeks.org/number-of-sub-arrays-with-negative-product/
               https://codeforces.com/blog/entry/69815
               
PROBLEM - Find number of subarrays whose product is negative 

CODE - 

*/

#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a[200000],i;

    cin>>n;

    ll position_zero=-1;
    ll ans0=0;

    for(i=0;i<n;i++)
    { cin>>a[i];
        if(a[i]==0)
         position_zero=i;
        if(position_zero!=-1)
         ans0 += position_zero+1;    
    }

    ll cnt1=0 ; //even no of negative element before them
    ll cnt2=0; //odd no of negative element before them
    ll negative=0; //no of negative element
    ll ansp=0; //subsegment with positive product

    
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            cnt1=0;
            cnt2=0;
            negative=0;
            continue;
        }
        if(negative%2 == 0 )
            cnt1++;
        else
            cnt2++;

        if(a[i]<0)
            negative++;

        if(negative%2 == 0)
            ansp += cnt1;
        else
            ansp += cnt2;
    }
    cout<<n*(n+1)/2-ans0-ansp <<' '<<ansp<<endl;
}
