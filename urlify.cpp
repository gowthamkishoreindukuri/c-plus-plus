#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        getline(cin,s);
        int n;
        cin>>n;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                cout<<"%20";
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}
