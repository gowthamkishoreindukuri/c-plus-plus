#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s,j=2;
    cin >>n >>m;
    if(m<n)
    {
    s=m;
    for(int i=1;i<=(n-1-m);i++)
    {
        s=s+j;
        j++;
    }
    cout << s;
    }
    else
    {
        cout << n-1;
    }

}
