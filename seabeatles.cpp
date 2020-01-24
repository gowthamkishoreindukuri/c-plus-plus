#include <bits/stdc++.h>
using namespace std;
int main( )
{
    int a1,b1,a2,b2,m=0,k;
    cin>>a1>>b1>>a2>>b2;
    k=abs(a1-a2);
    m=2*b1+2*b2+a1+a2+k+4;
    cout<<m;
    return 0;
}
