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
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                res++;
                while(s[i]=='1' && i<s.size())
                {
                    i++;
                }
            }
        }
        cout<<res<<endl;
    }
}
