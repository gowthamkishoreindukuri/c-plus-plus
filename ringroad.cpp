#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m+1];
    a[0]=1;
    for(int i=1;i<m+1;i++)
    {
        cin>>a[i];
    }
    long long c=0;
    for(int i=0;i<m;i++)
    {
        if(a[i]<=a[i+1])
        {
            c=c+(a[i+1]-a[i]);
        }
        else
        {
            c=c+n-a[i]+a[i+1];
        }
            //cout<<c<<endl;

    }
    cout<<c<<endl;
}
