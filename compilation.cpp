#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n-1],c[n-2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>c[i];
    }
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    for(int i=0;i<n;i++)
    {
        //cout<<b[i]<<" ";
        if(a[i]-b[i]!=0 || i==(n-1))
        {
            //cout<<endl;
            //cout<<a[i]<<" "<<b[i]<<endl;
            cout<<a[i]<<endl;
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        //cout<<b[i]<<" ";
        if(b[i]-c[i]!=0 || i==(n-2))
        {
            //cout<<endl;
            //cout<<a[i]<<" "<<b[i]<<endl;
            cout<<b[i]<<endl;
            break;
        }
    }
}
