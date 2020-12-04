#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int tmp=0;
        while(n--)
            {
                int a,b,c,d;
                cin>>a>>b>>c>>d;
                if(b==c)
                {
                    tmp=1;
                }
            }
        if(m%2!=0 || tmp==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
