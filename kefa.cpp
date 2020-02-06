#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >>n;
   int a[n];
   int m=0,v=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

   for(int j=1;j<n;j++)
   {
      if(a[j]>=a[j-1])
      {

          v=v+1;
          m=(v>m)?v:m;
      }
      else
      {

        m=(v>m)?v:m;
         v=0;
      }
   }
   cout << m+1 << endl;
}

