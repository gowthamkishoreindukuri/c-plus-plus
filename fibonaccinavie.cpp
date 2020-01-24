#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a=0,b=1,c;
    cin>>c;
    cout << a <<endl;
    cout << b <<endl;
    for(long long i=0;i<c-2;i++)
    {
            cout << a+b <<endl;

        a=b;
        b=a+b;
    }
}
