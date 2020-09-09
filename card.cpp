#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,tmp=0;
        cin>>n>>k;
        int nn,kk;
        n%9==0?nn=n:nn=(n/9)+1;
        k%9==0?kk=k/9:kk=(k/9)+1;
        if(nn==kk)
        {
            cout<<1<<" "<<kk<<endl;
        }
        else if(nn>kk)
        {
            cout<<1<<" "<<kk<<endl;
        }
        else
        {
            cout<<0<<" "<<nn<<endl;
        }
    }
}
