#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int f=-1,l=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1' && f==-1)
            {
                f=i;
            }
            else if(s[i]=='0' && f==1 && l==-1)
            {
                l=i;
            }
        }
        for(int i=l;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                f=-1;
                l=-1;
            }
        }
        if(f==-1 && l==-1)
        {
cout<<"NO"<<endl;

        }
        else
        {
            cout<<"YES"<<endl;

        }
    }
}
