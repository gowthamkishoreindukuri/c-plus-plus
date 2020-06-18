#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,tt=0;
        cin>>a>>b>>n;
        tt=a;
        a=max(a,b);
        b=min(tt,b);
        tt=0;
        long long c=0;
        while(a<=n && b<=n)
        {
            if(tt==0)
            {
                a=a+b;
                tt=1;
            }else
            {
                b=b+a;
                tt=0;
            }
            c++;
        }
        cout<<c<<endl;
    }
}
