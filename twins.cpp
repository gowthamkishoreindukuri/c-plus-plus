#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s1=0,s2=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int j=0;j<n;j++)
    {
        s1=s1+a[n-1-j];
        for(int k=0;k<(n-1-j);k++)
        {
            s2=s2+a[k];
        }
        if(s1>s2)
        {
            cout << j+1 <<endl;
            break;
        }else
        {
            s2=0;
        }

    }
}

