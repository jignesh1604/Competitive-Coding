/*https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/dummy1-3/description/*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t , n , i ;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%10==0)
        cout<<2<<endl;
        else
        {
            cout<<1<<endl<<n%10<<endl;
        }
    }
}
