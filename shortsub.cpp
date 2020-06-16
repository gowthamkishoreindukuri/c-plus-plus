#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        string s;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            cout<<s[i];
            i++;
        }
        cout<<s[(s.size())-1];
        cout<<endl;
    }
}
