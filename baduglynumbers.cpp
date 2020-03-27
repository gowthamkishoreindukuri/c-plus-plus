#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int s;
        cin>>s;
        if(s==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<"2";
            s=s-1;
            while(s--)
            {
                cout<<"3";
            }
            cout<<""<<endl;
        }
    }
}
