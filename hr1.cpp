#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    string s;
    getline(cin,s);
    while(t--)
    {

        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}

