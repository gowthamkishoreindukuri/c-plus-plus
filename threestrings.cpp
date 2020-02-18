#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nc;
    cin>>nc;
    for(int j=0;j<nc;j++)
    {
         int cc=0;
    string a,b,c;
    cin>>a>>b>>c;
    int n=a.length();
    char x,y,z;
    for(int i=0;i<n;i++)
        {
            x=a[i];
            y=b[i];
            z=c[i];
            if((  ((x==y)|| (x==z)) || ((y==x)|| (y==z)) ||((z==y)|| (z==x)) )&&((x!=y)|| ((x==y)&&(y==z))))
            {
                cc=cc+1;
            }

        }
        if(cc!=n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

}

