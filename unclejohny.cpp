#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,z,a,b,c,ab;
cin >> x >>y >>z >> a >>b >>c;
int k1,k2,k3;
k1=a-x;
a=k1;
k2=a+b-y;
ab=k2;
k3=ab+c-z;
if(k1 >=0 && k2>=0 && k3>=0)
{
    cout << "YES";
}
else
{
    cout << "NO";
}
}
