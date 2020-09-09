#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int h=0,e=0,l1=0,l2=0,o=0;
    for(int i=0;i<s.size();i++)
    {

        if(s[i]=='h' && e==0 && l1==0 && l2==0 && o==0)
        {
            h=1;
        }
        if(s[i]=='e' && h==1 && l1==0 && l2==0 && o==0)
        {
            e=1;
        }
        if(s[i]=='l' && e==1 && l1==1 && h==1 && o==0)
        {
           l2=1;
        }
        if(s[i]=='l' && e==1 && h==1 && l2==0 && o==0)
        {
            l1=1;
        }

        if(s[i]=='o' && e==1&& l1==1 && l2==1 && h==1)
        {
            o=1;
        }
        //cout<<h<<e<<l1<<l2<<o<<endl;
    }
        if(h==1 && e==1 && l1==1 && l2==1 && o==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
}
