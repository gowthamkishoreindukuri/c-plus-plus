#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        long long a[n],s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        if(s%x!=0 || s==0)
        {
            cout<<n<<endl;
        }
        else
        {
        int c=0;
        for(int i=0;i<n;i++)
           {
           if(a[i]%x==0)
           {
               c++;
           }
           }
           if(c==n)
           {
               cout<<-1<<endl;
           }
           if(c<n)
           {
               cout<<n-1<<endl;
           }
        }

    }
    return 0;
}
