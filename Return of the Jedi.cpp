#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c=0;
        cin>>a>>b;
        while(b>0)
        {
            a=a-b;
            b=b/2;
            if(a<=0)
            {
                c=1;
                cout<<1<<endl;
                break;
            }
        }
        if(!c)
        {
            cout<<0<<endl;
        }
    }
}
