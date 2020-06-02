#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    int mi=101,ma=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(mi>a[i])
        {
            mi=a[i];
        }

    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(ma<b[i])
        {
            ma=b[i];
        }
    }
    int s=0,v;
    for(int j=mi;j<ma+1;j++)
    {
    v=0;
    for(int i=0;i<n;i++)
    {
        if(!(j%a[i]==0))
        {
            v++;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(!(b[i]%j==0))
        {
            v++;
        }
    }
    if(v==0)
    {
        s++;
    }
    }
    cout<<s<<endl;
}
