#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
     int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='W'){
                if(a[i][j+1]=='P' && j+1<m){
                    c++;
                    a[i][j+1]='*';
                }
                else  if(a[i][j-1]=='P' && j-1>=0){
                    c++;
                    a[i][j-1]='*';
                }
                else  if(a[i-1][j]=='P' && i-1>=0){
                    c++;
                    a[i-1][j]='*';
                }
                else  if(a[i+1][j]=='P' && i+1<n){
                    c++;
                    a[i+1][j]='*';
                }
            }
        }
    }
    cout<<c;
    return 0;
}



