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
        int n=s.size(),c=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='x' && s[i+1]=='y')
            {
                c++;
                s[i]='o';
                s[i+1]='o';
            }
            if(s[i]=='y' && s[i+1]=='x')
            {
                c++;
                s[i]='o';
                s[i+1]='o';
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
