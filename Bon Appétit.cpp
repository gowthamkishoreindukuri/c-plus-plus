#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(!(i==k))
        {
            s=s+a[i];
        }
    }
    int b;
    cin>>b;
    s=s/(2);
    if(s==b)
    {
        cout<<"Bon Appetit"<<endl;
    }
    else
    {
        cout<<abs(s-b)<<endl;
    }
}
