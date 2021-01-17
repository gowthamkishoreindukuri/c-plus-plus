#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int cnt=0,t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        t+k<6?cnt++:cnt+=0;
        //cout<<cnt<<endl;
    }
    cout<<cnt/3<<endl;
}
