#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,a;
        cin>>n>>k;
        long long s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a>k)
            {
                s=s+(a-k);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
