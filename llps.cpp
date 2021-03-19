#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char c = s[0];
    for(int i=1;i<s.size();i++)
    {
        if(c<s[i])
        {
            c=s[i];
        }
    }
    //cout<<c<<endl;
    string res;
    for(int i=0;i<s.size();i++)
    {
        if(c==(char)s[i])
        {
            //cout<<i<<endl;
            res+=s[i];
        }
    }
    cout<<res<<endl;
    return 0;
}
