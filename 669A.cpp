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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            b.push_back(a[i]-a[i+1]);
            i++;
        }
        if(b.size()==1 && (b[0]==1 || b[0]==-1))
        {
            cout<<1<<endl;
            cout<<0<<endl;
        }
        else
        {
                 vector<int> c;
        for(int i=0;i<b.size();i++)
        {
            if(b[i]==0)
            {
                c.push_back(a[2*i]);
                c.push_back(a[2*i+1]);
            }
            else
            {
                c.push_back(1);
                c.push_back(1);
                i++;
            }
        }
        cout<<c.size()<<endl;
        for(int i=0;i<c.size();i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
        }

    }
}
