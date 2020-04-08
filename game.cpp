#include<bits/stdc++.h>
using namespace std;
int main()
{   int h,hh,s=-1,cc=0;
double n,m;
    cin>>n>>m;
    h=m/n;
    hh=m/n;
    double d;
    d=m/n;
    if(h!=0&&(d==h))
    {
cc=1;
    while(h%2==0)
    {

        h=h/2;
        s=s+1;
    }
    while(hh%3==0)
    {
        cc=1;

        hh=hh/3;
        s=s+1;
    }
    }
if(cc==1)
{
        cout<<s<<endl;

}
else{

        cout<<-1<<endl;

}    }

