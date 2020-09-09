#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    queue<char> s;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[i])
        {
            s.push('0');
        }
        else
        {
            s.push('1');
        }
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<s.front();
        s.pop();
    }
}
