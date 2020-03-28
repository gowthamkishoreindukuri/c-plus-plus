#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tt=0;tt<t;tt++)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int my=a[0],out;
        a[0]=0;
        int h=accumulate(a, a+n, 0);
        if(h+my<=m)
        {
            cout<<h+my<<endl;
        }
        else
        {
            cout<<m<<endl;
        }
    }
}
