#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a,b,c,num,p=0;
   cin >> n>>a>>b>>c;
   int ab[n];
   for(int i=0;i<n;i++)
   {
       cin>>ab[i];
   }
   for(int j=0;j<n;j++)
   {
       for(;;)
       {
           if(ab[j]>0)
           {
               ab[j]=ab[j]-a;
           }
           else
           {
            num=b;
            break;
           }
           if(ab[j]>0)
           {
               ab[j]=ab[j]-b;

           }
           else
           {
               num=a;
               break;
           }
       }
        cout << num << endl;
       if(num==a)
       {
           p=p+1;
       }
   }
   //cout << p << endl;
   p=p+c;

   if(p>n)
   {
       //cout << p-c <<endl;
   }
   else
   {
       //cout << p << endl;
   }
}
