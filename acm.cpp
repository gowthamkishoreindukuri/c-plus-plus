#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if((a+b+c)==(d+e+f))
    {
        cout<<"YES"<<endl;
    }
    else if((a+b+d)==(c+e+f))
    {
        cout<<"YES"<<endl;
    }
    else if((a+b+e)==(d+c+f))
    {
        cout<<"YES"<<endl;
    }
    else if((a+b+f)==(c+e+d))
    {
        cout<<"YES"<<endl;
    }
    else if((a+d+c)==(b+e+f))
    {
        cout<<"YES"<<endl;
    }
    else if((a+e+c)==(d+b+f))
    {
        cout<<"YES"<<endl;
    }
    else if((a+f+c)==(d+b+e))
    {
        cout<<"YES"<<endl;
    }
    else if((a+e+f)==(b+c+d))
    {
        cout<<"YES"<<endl;
    }
    else if((a+d+e)==(b+c+f))
    {
        cout<<"YES"<<endl;
    }
    else if((a+d+f)==(b+e+c))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
