#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int mn=a[m-1],d;
    for(int i=0;i<=m-n;i++)
    {
        d=abs(a[i]-a[i+n-1]);
        //cout<<a[i]<<" "<<a[i+n-1]<<"="<<d<<endl;
        mn=min(d,mn);
    }
    cout<<mn<<endl;
}
