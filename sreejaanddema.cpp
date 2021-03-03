#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
     cin>>a[i];
    }
    sort(a,a+n);
    int ac=0,bc=0;
    int tmp=0;
    for(int i=n-1;i>=0;i--)
    {
        cout<<ac<<" "<<bc<<endl;
        if(!tmp)
        {
            ac+=a[i];
            tmp=1;
        }
        else
        {
            tmp=0;
            bc+=a[i];
        }
    }
    cout<<ac<<" "<<bc<<endl;
}
