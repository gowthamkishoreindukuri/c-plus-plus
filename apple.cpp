#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int cnt=0;
            if(i+1>=0 && i+1<n)
            {
                if(a[i+1][j]=='o')
                {
                    cnt++;
                }
            }
            if(i-1>=0 && i-1<n)
            {
                if(a[i-1][j]=='o')
                {
                    cnt++;
                }
            }

            if(j+1>=0 && j+1<n)
            {
                if(a[i][j+1]=='o')
                {
                    cnt++;
                }
            }
            if(j-1>=0 && j-1<n)
            {
                if(a[i][j-1]=='o')
                {
                    cnt++;
                }
            }
            if(cnt%2==1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;
    return 0;
}
