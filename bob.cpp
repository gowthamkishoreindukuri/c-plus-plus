#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int s=0;
    int i=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0 && m)
        {
            s=s+a[i];
            m--;
        }
    }
    cout<<abs(s)<<endl;
}

