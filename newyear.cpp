#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int s=0,v,i;
    for(i=1;i<n+1;i++)
    {
        v=5*i;
        if(!(s+v+k<=240))
        {
            break;
        }
        s=s+v;
    }
    cout<<i-1<<endl;
}
