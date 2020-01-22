#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    for(int i=0;i<m;i++)
    {
    int n,a,b,c,n1;
    cin >> a>>b>>c >>n  ;
    float n2;
    float s=a+b+c+n;
    n1=s/3;
    n2=(s/3);
    if(n!=0)
    {
    if(n2==n1 && (n1>=a && n1>=b && n1>=c))
    {

      cout << "YES"<<endl;
    }
    else {

         cout << "NO"<<endl;
    }
    }
    else
    {
        if(n==0 && a==b && c==b)
        {
            cout << "YES"<<endl;
        }
         else {

         cout << "NO"<<endl;
    }
    }

    }

}
