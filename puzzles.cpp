#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mm;
    cin >>n>>m;
    int a[m],c=0;
    for(int y=0;y<m;y++)
    {
        cin >>a[y];
    }
    sort(a,a+m);
    if(a[0]>a[n])
    {
        mm=a[0]-a[n];
    }
    else
    {
         mm=a[n]-a[0];
    }
    for(int i=0;i<m-n;i++)
    {
    if(a[i]>a[i+4] && (a[i]-a[i+4])<m )
    {
       mm=a[i]-a[i+4];

    }
   if(a[i]<=a[i+4] && (-a[i]+a[i+4])<m )
    {
       mm=-a[i]+a[i+4];

    }
       cout <<mm<<'\n';
    }
    cout <<mm<<'\n';

}

