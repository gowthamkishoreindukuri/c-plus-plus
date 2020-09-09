#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::toupper);
    transform(b.begin(),b.end(),b.begin(),::toupper);
    int s=0;
    for(int i=0;i<a.size();i++)
    {
        s=a[i]-b[i];
    if(s>0)
    {
        cout<<1<<endl;
        return 0;
    }
    else if(s<0)
    {

        cout<<-1<<endl;
        return 0;
    }
    }
    if(s>0)
    {
        cout<<1<<endl;
        return 0;
    }
    else if(s<0)
    {

        cout<<-1<<endl;
        return 0;
    }
    else{
        cout<<0<<endl;
        return 0;
    }
}
