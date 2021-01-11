#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tmp,s=0;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            mp[tmp]++;
            s+=tmp;
        }
        //cout<<mp[1];
        if((mp[1]%2==0 && mp[2]%2==0)&&  s%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
