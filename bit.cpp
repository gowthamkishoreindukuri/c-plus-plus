#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,p,q;
    cin>>n>>s>>p>>q;
    set<int> ss;
    int a[n];
    a[0]=s;
    ss.insert(a[0]);
    for(int i=1;i<n;i++)
    {
        a[i]=(a[i-1]*p)+q;
        ss.insert(a[i]);
    }
    cout<<ss.size()<<endl;
}
