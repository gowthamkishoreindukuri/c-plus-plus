#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c =-1;
        int a[26];
        for(int i=0;i<26;i++)
        {
            a[i]=0;
        }
        int tmp;
        //1cout<<c<<endl;
        for(int i=0;i<s.size();i++)
        {
            tmp=s[i]-'a';
            //cout<<tmp<<endl;
            if(a[tmp]!=0)
            {
                //cout<<"ok"<<endl;
                c=i;
                break;
            }
            a[tmp]++;
        }
        if(c==-1)
        {
            cout<<"-1"<<endl;
        }
        else
        {

            cout<<s[c]<<endl;
        }

    }
    return 0;
}
