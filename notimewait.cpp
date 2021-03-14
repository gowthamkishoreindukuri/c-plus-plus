#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,h,x;
    int val,tmp;
    cin>>n>>h>>x;
    val=h-x;
    bool res =false;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if(tmp>= val)res=true;
    }
    if(res)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
