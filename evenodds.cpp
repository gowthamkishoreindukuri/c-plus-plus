#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,val;
    cin>>n>>k;
    if((k)>(n+1)/2)
    {
        cout<<(k-((n+1)/2))*2<<endl;
    }
    else
    {
        cout<<(k)*2-1<<endl;
    }
}
