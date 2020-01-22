#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int p=a[0]*a[1],t;
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(j!=k)
            {
            t=a[j]*a[k];
            if(t>p)
            {
                p=t;
            }
            }

        }
    }
    cout <<p;
}
