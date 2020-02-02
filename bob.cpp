#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c1=0,c2=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            c1=c1+1;
        }
        else{c2=c2+1;}
    }
    if(c1>c2)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]%2==1)
            {
                cout << j+1 <<endl;
                break;
            }
        }
    }
    else
    {
        for(int jj=0;jj<n;jj++)
        {
            if(a[jj]%2==0)
            {
                cout << jj+1 <<endl;
                break;
            }
        }
    }
}
