#include<bits/stdc++.h>
using namespace std;
long long fac(int a)
{
    if(a>1)
    {
        return a*fac(a-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<fac(n)+1<<endl;
}
