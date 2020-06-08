#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d,m,c=0,s=0;
    cin>>d>>m;
    for(int i=0;i<n-m+1;i++)
    {
        for(int j=i;j<i+m;j++)
        {
            s=s+a[j];
        }
        if(s==d)
        {
            c++;
        }
        s=0;
    }
    cout<<c<<endl;
    return 0;
}
