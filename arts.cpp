#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],c=0;
    for(int y=0;y<5;y++)
    {
        cin >>a[y];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
           for(int k=j+1;k<5;k++)
            {
              if((a[k]+a[j]>a[i]) && (a[i]+a[k]>a[j]) && (a[i]+a[j]>a[k]))
              {

                  c=c+1;
              }
            }
         }
    }
    cout <<c<<'\n';

}
