#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        long long c=0;
        int aa=*min_element(a,a+n);
        int bb=*min_element(b,b+n);
        int tmp;
        for(int i=0;i<n;i++)
        {
            c=c+max((a[i]-aa),(b[i]-bb));
        }
        cout<<c<<endl;
    }
    return 0;
}
