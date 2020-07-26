#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0,ne=0,z=0,n;
    while(cin>>n)//enter s to stop.
    {
        if(n>0)
        {
            p++;
        }
        if(n<0)
        {
            ne++;
        }
        if(n==0)
        {
            z++;
        }
    }
    cout<<p<<" "<<ne<<" "<<z<<endl;
}
