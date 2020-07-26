#include<bits/stdc++.h>
using namspace std;
int main()
{
    map<string , string> nac;
    map<string , string> n , c;
    int nn, mm;
    cin>>nn>>mm;
    string s1,s2;
    while(nn--)
    {
        cin>>s1>>s2;
        nac.insert(pair<string,string>(s1,s2));
        n.insert(pair<string , int>(s1,0));
        if(c.find(s2)==c.end())
        {
            c.insert(pair<string,int>(s2,0));
        }
    }



}
