#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s=0;
    cin>>n;
    if(n%2==0)
    {
        cout << n/2 <<endl;
    }
    else
    {
        cout<<(-1*((n/2)+1))<<endl;
    }
}
