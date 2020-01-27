#include <bits/stdc++.h>
using namespace std;
int main( )
{
    long long int x,i;
    cin>>x;
    for(i=0;i<x;i++)
    {
        long long int m,n;
        cin>>m>>n;
        cout<<((m-1)*9+n)<<endl;
    }
    return 0;

}
