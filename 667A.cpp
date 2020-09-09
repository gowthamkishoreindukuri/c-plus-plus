#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,c=0;
        cin>>a>>b;
        n=abs(a-b);
        for(int i=10;i>0;i--)
        {
            c=c+(n/i);
            n=n%i;
        }
        cout<<c<<endl;
    }
    return 0;
}
