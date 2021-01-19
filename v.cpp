#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if((i+1>=0 && i+1<=n-1 && a[i+1][j]=='o') || (i-1>=0 && i-1<=n-1 && a[i-1][j]=='o') || (j+1>=0 && j+1<=n-1 && a[i][j+1]=='o') || (j-1>=0 && j-1<=n-1 && a[i][j-1]=='o') )
            {
                cnt++;
            }
        }
        if(cnt)
    }

