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
        int a[n],b[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<=n;i++)
        {
            if(i==0)
            {
               b[i]=a[i];
            }
            else if(i==n)
            {
                b[i]=a[i-1];
            }
            else
            {
                b[i]=max(a[i-1],a[i]);
            }
        }
        int tmp=0;
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<b[i];j++)
            {
                if(i==0 || a[i-1]<b[i])
                {
                    cout<<"a";
                }
                else
                {
                    if((b[j-1]>b[j]) && ((j+1<a[i-1] )|| tmp==1))
                    {
                        cout<<"a";
                    }
                    else{
                        cout<<"b";
                        tmp=1;
                    }
                }
            }
            cout<<endl;
            tmp=0;
        }

    }
    return 0;
}
