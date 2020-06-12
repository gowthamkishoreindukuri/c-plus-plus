#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    int a[5];
    a[0]=0;
    a[1]=0;
    a[2]=0;
    a[3]=0;
    a[4]=0;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t==1)
        {
            a[0]=a[0]+1;
        }
        if(t==2)
        {
            a[1]=a[1]+1;
        }
        if(t==3)
        {
            a[2]=a[2]+1;
        }
        if(t==4)
        {
            a[3]=a[3]+1;
        }
        if(t==5)
        {
            a[4]=a[4]+1;
        }
    }
    t=a[0];
    int c;
    for(int i=0;i<5;i++)
    {

        if(t<a[i])
        {
            t=a[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]==t )
        {
            c=i+1;
            cout<<c<<endl;
            return 0;
        }
    }
    cout<<c<<endl;
}
