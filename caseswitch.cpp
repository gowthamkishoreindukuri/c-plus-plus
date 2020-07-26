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
        char k;
        for(int i=0;i<s.size();i++)
        {
            k=s[i];
            if(isupper(k))
            {
            cout<<(char)tolower(k);
            }
            else
            {
                cout<<(char)toupper(k);
            }
        }
        cout<<endl;
    }
}
