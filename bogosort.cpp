/*............YOUR LIFE SHOULD BE THE ROLE MODEL FOR OTHERS.......gowtham-kishore-indukuri.:).........*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int hh=0;hh<t;hh++)
    {
     int s;
     cin>>s;
     int a[s];
     for(int i=0;i<s;i++)
     {
         cin>>a[i];
     }
     sort(a,a+s);
     for(int j=s-1;j>=0;j--)
     {
         cout<<a[j]<<" ";
     }
    }
    return 0;
}

