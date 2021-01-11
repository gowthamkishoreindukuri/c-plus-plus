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
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=')')
            {
                break;
            }
            cnt++;
        }
        if((n-cnt-cnt)<0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
