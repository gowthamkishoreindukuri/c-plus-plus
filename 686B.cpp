#include<bits/stdc++.h>
using namespace std;
int finddt(int bb[],int s,int num)
{
    for(int i=0;i<s;i++)
    {
        if(bb[i]==num)
        {
            return i+1;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n],b[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           b[i]=a[i];
       }
       sort(a,a+n);
       int ind=-1,tmp=0;
       for(int i=0;i<n;i++)
       {

           if(((upper_bound(a,a+n,a[i])-a)-(lower_bound(a,a+n,a[i])-a))-1==0)
           {
               cout<<finddt(b,n,a[i])<<endl;;
               tmp=1;


               break;
           }
       }
       if(tmp==0)
       {
           cout<<-1<<endl;
       }
    }
}

