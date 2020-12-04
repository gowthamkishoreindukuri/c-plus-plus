#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,m;
        cin>>n>>m;
        float a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        float sm=0;
        for(float i=1;i<=n;i++)
        {
            for(float j=i;j<=n;j++)
            {

                int tmp;
                tmp=j;

                //cout<<a[tmp-1]<<" "<<j<<" "<<a[tmp]/j<<endl;
                sm=sm+(a[tmp-1]/j);
            }
        }

        if(sm==m)
        {

            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
