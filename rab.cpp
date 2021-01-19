#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int f,t,tmp;
    int m=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>f>>t;
        if(t>k)
        {
           tmp=f-(t-k);
        }
        else
        {
            tmp=f;
        }
        m=max(m,tmp);
    }
    cout<<m<<endl;
}
