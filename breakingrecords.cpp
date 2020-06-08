#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],in=0,de=0,ma,mi;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ma=a[0];
    mi=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>ma)
        {
            ma=a[i];
            in++;
        }
        if(a[i]<mi)
        {
            mi=a[i];
            de++;
        }
    }
    cout<<in<<" "<<de<<endl;

}
