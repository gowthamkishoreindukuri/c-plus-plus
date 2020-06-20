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
        int a[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        int v1,v2,c=0;
        for(int i=0;i<2*n;i++)
        {
            for(int j=0;j<2*n;j++)
            {
                v1=a[i];
                v2=a[j];
                if(v1!=-1 && v2!=-1)
                {
                if(i!=j && c!=n-1)
                {
                    if((v1+v2)%2==0)
                    {
                        cout<<i+1<<" "<<j+1<<endl;
                        c++;
                        a[i]=-1;
                        a[j]=-1;
                    }

                }
                }
            }
        }
    }
}
