#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        int s=0;
        s=s+max((n-r),(r-1))+max((m-c),(c-1));
        cout<<s<<endl;
    }
}
