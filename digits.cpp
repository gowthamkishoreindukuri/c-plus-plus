#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int tmp,t=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if(tmp==0)
        {
            t++;
        }
        else
        {
            c++;
        }
    }
    c=c*5;
    while(!(c%9==0))
    {
        c=c-5;
    }
    c=c/5;
    int f=0;
    for(int i=0;i<c;i++)
    {
        f=1;
        cout<<5;
    }
    while(t-- && f==1)
    {
        cout<<0;
    }
    if(t==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(f==0)
    {
        cout<<0;
    }
}
