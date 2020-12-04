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
        int val;
        val=((n%10)-1)*10;
        int d=0,i=1;
        while(n)
        {
            n/=10;
            d+=i;
            i++;

        }
        val+=d;
        cout<<val<<endl;

    }
}
