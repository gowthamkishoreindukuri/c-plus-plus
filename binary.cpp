#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        string st,res;
        cin>>st;
        res+='1';
        int p1=st[0]-'0',p2=1;
        for(int ii=1;ii<n;ii++)
        {
            int tmpp=p1+p2,tmp2;
            if(tmpp==0)
            {
                tmp2=st[ii]-'0';
                tmp2==1?res+='1':res+='1';
            }
            else if(tmpp==1)
            {
                tmp2=st[ii]-'0';
                tmp2==1?res+='1':res+='0';
            }
            else if(tmpp==2)
            {
                tmp2=st[ii]-'0';
                tmp2==1?res+='0':res+='1';
            }
            p1=st[ii]-'0';
            p2=res[res.size()-1]-'0';
        }
        cout<<res<<endl;
    }
}
