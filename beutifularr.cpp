#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],n1,n2,s=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
          cin >>a[i][j];
          if(a[i][j]==1)
        {
           n1=i+1;
           n2=j+1;
        }
        }
    }
    if(n1>=3)
    {
        s=s+n1-3;
    }
    else
    {
        s=s+3-n1;
    }
     if(n2>=3)
    {
        s=s+n2-3;
    }
    else
    {
        s=s+3-n2;
    }
    cout <<s<<endl;
}
