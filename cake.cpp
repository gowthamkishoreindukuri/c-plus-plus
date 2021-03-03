#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    char m[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>m[i][j];
        }
    }
    int rc=0,cc=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(m[i][j]=='S')
            {
                rc++;
                break;
            }
        }
    }
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            //cout<<m[i][j]<<" ";
            if(m[i][j]=='S')
            {

                cc++;
                break;
            }
        }
    }
    //cout<<endl;
    //cout<<rc<<" "<<cc<<endl;
    cout<<a*b - (rc*cc)<<endl;
}
