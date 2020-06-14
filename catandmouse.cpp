#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    int x,y,z;
    cin>>x>>y>>z;
    if(abs(x-z) == abs(y-z))
    {
        cout<<"Mouse C"<<endl;
    }
    if(abs(x-z) < abs(y-z))
    {
        cout<<"Cat A"<<endl;
    }
    if(abs(x-z) > abs(y-z))
    {
        cout<<"Cat B"<<endl;
    }
    }
    return 0;
}
