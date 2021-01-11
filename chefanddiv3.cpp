#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d;
        cin>>n>>k>>d;
        int t,s=0;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            s+=t;
        }
        s=(s)/k;
        if(s>d)
        {
            cout<<d<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
}
