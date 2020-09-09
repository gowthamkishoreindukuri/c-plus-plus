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
        int a[26];
        for(int i=0;i<26;i++)
        {
            a[i]=0;
        }
        int c;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int j=0;j<s.size();j++)
            {
                c=s[i];
                int tmp=c;//-141;
                cout<<tmp;
                a[tmp]++;
            }
        }
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            //cout<<a[i];
            if(a[i]%n!=0)
            {
                cnt++;
            }
        }
        if(cnt)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
