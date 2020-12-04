#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {

            mp[s[i]]++;
        }
        int tmp=2;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]!=1)
            {
                tmp=1
                ;
                break;
            }
        }
        if(tmp==2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
