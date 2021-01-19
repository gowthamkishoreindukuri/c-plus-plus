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
    int b[n-1];
    int tmp;
    for(int i=0;i<n-1;i++)
    {
        tmp=a[i]-a[i+1]-m;
        tmp<=0?b[i]=0:b[i]=tmp;
    }
    sort(b,b+n-1);
    cout<<b[n-2]<<endl;
}
