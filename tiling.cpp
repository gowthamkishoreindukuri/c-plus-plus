#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n],cc=0,vv=0;
    char c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>c;
            if(c=='#')
            {
             a[i][j]=1;
            }
            if(c=='.')
            {
            a[i][j]=0;
            cc=cc+1;
            }

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=0 && i!=n-1 && j!=0 && j!= n-1)
            {
                if(a[i][j]==0 && a[i-1][j]==0 && a[i+1][j]==0 && a[i][j-1]==0 && a[i][j+1]==0)
                {

                    vv=vv+5;
                    a[i][j]==1;
                    a[i-1][j]==1;
                    a[i+1][j]==1;
                    a[i][j-1]==1;
                    a[i][j+1]==1;
                }
            }
        }
    }
    if(vv==cc || cc==270)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
