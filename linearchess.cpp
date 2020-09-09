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
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
        }
        tmp=0;
        for(int i=n;i>0;i--)
        {
            if(i!=1)
            {
                if(k%i==0)
                {
                    cout<<i<<endl;
                    tmp=1;
                    break;
                }
            }
        }
        if(!tmp)
        {
            cout<<-1<<endl;
        }
    }
}
