#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(!(a==b || a==c || b==c))
        {
            cout<<"No"<<endl;
        }
        else
        {
            int x,y,z;
            if(a==b)
            {
                x=a;
                y=c;
            }
            if(a==c)
            {
                x=a;
                y=b;
            }
            if(b==c)
            {
                x=b;
                y=a;
            }
            if(x<y )
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
                cout<<x<<" "<<y<<" "<<y<<endl;
            }
        }
    }
    return 0;
}
