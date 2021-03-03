#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nn=n;
    int cnt=0;
    int a,b;
    while(n--)
    {
        cin>>a>>b;
        //cout<<b<<a<<endl;
        if(a<b || b<a)
        {
            //cout<<"ok"<<endl;
            cnt++;
        }
    }
    if(cnt==nn)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
    {
        cout<<"Poor Alex"<<endl;
    }
}
