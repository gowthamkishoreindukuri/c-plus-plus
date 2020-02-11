#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n],b[n],ii=0,jj=0,c[n-1];
    for(int i=0;i<(2*n);i++)
    {
        if(i%2==0)
        {
            cin>>a[ii];
            ii++;
        }
        else
        {
            cin>>b[jj];
            jj++;
        }
    }
    ii=0;
    jj=1;
    c[0]=b[0];
    for(int k=1;k<n-1;k++)
    {
      c[k]=(b[ii]>a[jj]?(b[ii]-a[jj]):a[jj]-b[ii])+b[ii+1];
      b[ii+1]=c[k];
      ii++;
      jj++;
    }
    sort(c,c+n-1);
    cout<<c[n-2]<<endl;
}
