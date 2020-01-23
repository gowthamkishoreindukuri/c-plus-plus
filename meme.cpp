#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    cin >>nn;
    for(int y=0;y<nn;y++)
    {
            long long a,b,c=0;
    cin >> a>> b;
    for(long long i=1;i<=a;i++)
    {
        for(long long j=1;j<=b;j++)
        {
           long long  num1=(i*((j/10)+1)*10)+j;
            long long num2=i+j+(i*j);
            if(num1==num2)
            {
                c=c+1;
            }
        }
    }
    cout << c;
    }

}
