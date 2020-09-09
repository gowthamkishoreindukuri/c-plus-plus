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
        int p=0,q=0,r=0;
        int m=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            if(p>0 && q>0 && r>0)
            {
                if(m<(p+q+r))
                {
                    m=p+q+r;
                }
                p=0;
                q=0;
                r=0;
            }
            if(s[i]-'0'==1)
            {
                p++;
            }
            if(s[i]-'0'==2)
            {
                q++;
            }
            if(s[i]-'0'==3)
            {
                r++;
            }

        }
        cout<<(m)<<endl;
    }
}
