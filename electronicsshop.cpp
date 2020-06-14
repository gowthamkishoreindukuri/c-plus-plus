#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int b,n,m;
    cin>>b>>n>>m;
    int a[n],c[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
    }
    int v,ma=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            v=a[i]+c[j];
            if(v>ma && v<=b)
            {
                ma=v;
            }
        }
    }
    cout<<ma<<endl;
    return 0;
}
