#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float n,x;
        cin>>n>>x;
        if(n<=2)
        {
            cout<<1<<endl;
        }
        else{
            cout<<1+ceil((n-2)/x)<<endl;
        }
    }
}
