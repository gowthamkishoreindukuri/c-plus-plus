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
        int e=0,o=0,t;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            if(i%2==0 && t%2==1)
            {
                e++;
            }
            if(i%2==1 && t%2==0)
            {
                o++;
            }
        }
        if(e==o)
        {
            cout<<e<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
