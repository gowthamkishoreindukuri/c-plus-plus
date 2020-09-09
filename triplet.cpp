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
        long long int tmp=0;
        long long int p=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(!(i==j || i==k || j==k))
                    {
                        tmp=a[i]*a[j]*a[k];

                    if(p<tmp)
                    {
                        //cout<<p<<endl;
                        p=tmp;
                    }
                    }
                }
            }
        }
        cout<<p<<endl;
    }
}
