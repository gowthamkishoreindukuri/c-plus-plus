#include <bits/stdc++.h>
using namespace std;
int main( )
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
if(a1==b2)
{
    cout << b1 <<" "<< a2<<endl;
}
       else
       {
           cout << a1 <<" "<< b2<<endl;
       }

    }
    return 0;
}
