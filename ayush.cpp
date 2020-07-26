#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {

        string s;
        cin>>s;
        int h=0;
        char k;
        cin>>k;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==k)
            {
                h++;
            }
        }
        cout<<h<<endl;
    }
}
