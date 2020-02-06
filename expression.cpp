#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a>> b>>c;
    int m=(a+b+c);
    if(m<(a*b*c))
    {
        m=(a*b*c);
    }
    if(m<(a+(b*c)))
    {
        m=(a+(b*c));
    }
    if(m<(c+(b*a)))
    {
        m=(c+(b*a));
    }
    if(m<((a+b)*c))
    {
        m=((a+b)*c);
    }
    if(m<((c+b)*a))
    {
        m=((c+b)*a);
    }
    cout<< m <<endl;
}
