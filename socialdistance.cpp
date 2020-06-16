#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string a;
        cin>>a;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='0')
            {
                c++;
            }
            i=i+k;
        }
        cout<<c<<endl;
    }
}
