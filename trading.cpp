#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    int a[n],b[m],am,bm;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);sort(b,b+m);
    am=a[0];
    bm=b[m-1];
    if(am<bm)
    {
     cout<<(r+((r/am)*(bm-am)))<<endl;
    }
    else
    {
        cout<<r<<endl;
    }
}
