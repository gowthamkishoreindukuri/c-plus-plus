#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        while(n-- && x/2+10<x)
        {
            x=(x/2)+10;
        }
        while(m-- )
        {
            x=x-10;
        }
        if(x<=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
