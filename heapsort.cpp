#include<bits/stdc++.h>
using namespace std;
int heap(int n,int a[])
{
    int i=n,k,m;
    while(i>0)
    {
        if(2*i>(2*i)+1 && k>(2*i)+1)
        {
            swap(a[i-1],a[2*i]);
        }
        if(2*i<(2*i)+1 && k>(2*i))
        {
            swap(a[i-1],a[2*i-1]);
        }
        i--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    heap(n,a);
}
