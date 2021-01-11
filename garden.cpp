#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    fast;
    int a,b,c,d,tmp;
    cin>>a>>b>>c>>d;
    if(a==c && b!=d)
    {
        tmp=abs(b-d);
        cout<<a+tmp<<" "<<b<<" "<<c+tmp<<" "<<d<<endl;
    }
    else if(b==d && a!=c)
    {
        tmp=abs(a-c);
        cout<<a<<" "<<b+tmp<<" "<<c<<" "<<d+tmp<<endl;
    }
    else if(a+b==c+d)
    {
        cout<<min(a,c)<<" "<<min(b,d)<<" "<<max(a,c)<<" "<<max(b,d)<<endl;
    }
    else if(abs(a-c)==abs(b-d))
    {
        cout<<max(a,c)<<" "<<min(b,d)<<" "<<min(a,c)<<" "<<max(b,d)<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}