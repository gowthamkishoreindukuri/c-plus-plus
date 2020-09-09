#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(b/m>=a)
    {
        cout<<n<<endl;
    }
    else
    {
        int s=n/m;
        s=s+n%m;
        cout<<s<<endl;
    }
}
