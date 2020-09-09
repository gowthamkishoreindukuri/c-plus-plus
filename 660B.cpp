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
        int tmp=n/4,c=0;
        while(tmp--)
        {
            c++;
        }
        c++;
        tmp=n-c;
        while(tmp--)
        {
            cout<<9;
        }
        while(c--)
        {
            cout<<8;
        }
        cout<<endl;

    }
    return 0;
}
