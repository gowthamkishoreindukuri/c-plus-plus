#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,tmp;
    cin>>n>>m>>x>>y;
    int a=x,b=y;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {

            cout<<a<<" "<<b<<endl;
            if(a==n)
            {
                a=1;
            }
            else
            {
                a++;
            }
            tmp=a;
        }
        a=tmp;
        if(b==m)
            {
                b=1;
            }
            else
            {
                b++;
            }
    }
}
