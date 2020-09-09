#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
   sort(a,a+n);
   double m=max(abs(0-a[0]),abs(s-a[n-1]))*2;
   int tmp;
   for(int i=0;i<n-1;i++)
   {
       tmp=abs(a[i]-a[i+1]);
       if(tmp>m)
       {
           m=tmp;
       }
   }
   cout<<fixed<<setprecision(10)<<m/2.<<endl;
}
