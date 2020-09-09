#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int q;
   cin>>q;
   while(q--)
   {
       char g;
       int p,r;
       cin>>g>>p>>r;
       if(g=='U')
       {
           a[p]=r;
       }
       else
       {
           int tmp=r-p+1;
           int f[tmp];
           //cout<<tmp<<endl;
           if(tmp==0)
           {
               cout<<a[p];
           }
           else
           {
               for(int i=p-1;i<=r;i++)
               {
                   f[i]=a[i];
                   //cout<<f[i]<<" ";
               }
               //cout<<endl;
                cout << findGCD(f, tmp) << endl;
           }
       }
   }
}
