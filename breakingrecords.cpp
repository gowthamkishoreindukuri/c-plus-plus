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
    int ma=0,mi=0,maa=0,mii=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            mi++;
        }
        if(a[i]<a[i+1])
        {
            ma++;
            cout<<a[i+1]<<" ";
        }
    }
    cout<<ma<<" "<<mi<<endl;
}
