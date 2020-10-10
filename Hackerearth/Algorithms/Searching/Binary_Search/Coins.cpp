/*
Problem Link:- https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bags-of-coins-7b1d612c/
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,i,q,j,k,z=0,e_sum=0,p_sum=0;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
            
            cin>>a[i];
            e_sum+=a[i];
    }  
    sort(a,a+n);
    j=0;
    if(n!=1)
    {
    for(i=1;i<=100000;i++)
    {
        while(a[j]<i)
        {
          p_sum+=a[j];
          e_sum-=a[j];
          j++;
        }
        if(a[j]==i)
        {
            if(a[j+1]==i)
            {
            if((e_sum-2*i)==p_sum)
            {
                cout<<"YES";
                z=1;
                break;
            }
            }
            else
            {
             if((e_sum-i)==p_sum)
            {
                cout<<"YES";
                z=1;
                break;
            }   
            }
        }
        else
        {
            if(e_sum==p_sum)
            {
                cout<<"YES";
                z=1;
                break;
            }
        }
    }
    }
    
            if(z==0)
            cout<<"NO"<<"\n";
            
return 0;
}
            
            
            
            
