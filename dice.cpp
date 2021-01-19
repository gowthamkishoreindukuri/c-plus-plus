#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int n1=0,n2=0,n3=0;
    for(int i=1;i<=6;i++)
    {
        if(abs(n-i)<abs(m-i))n1++;
        if(abs(n-i)==abs(m-i))n2++;
        if(abs(n-i)>abs(m-i))n3++;
    }
    cout<<n1<<" "<<n2<<" "<<n3<<endl;
}
