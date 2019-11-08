#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int t=0;t<T;t++){
        int n,m,q;
        cin>>n>>m>>q;
        vector<int> row;
        vector<int> col;
        for(int i=0;i<m;i++){
        	col.push_back(0);
		}
		for(int i=0;i<n;i++){
        	row.push_back(0);
		}
        for(int i=0;i<q;i++){
            int posX,posY;
            cin>>posX>>posY;
            row[posX-1]++;
            col[posY-1]++;
        }
        long long ans=0;
        long long oddrow=0,evenrow=0,oddcol=0,evencol=0;
        for(int i=0;i<n;i++){
            if(row[i]%2==0){
                evenrow++;
            }
            else{
                oddrow++;
            }
        }
        for(int i=0;i<m;i++){
            if(col[i]%2==0){
                evencol++;
            }
            else{
                oddcol++;
            }
        }
        ans=evencol*oddrow+evenrow*oddcol;
        cout<<ans<<endl;
    }
}
