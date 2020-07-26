#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      n=n*2;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              if(a[i]==a[j] && a[i]!=-1 && i!=j)
              {
                  cout<<a[i]<<" ";
                  a[i]=-1;
                  a[j]=-1;
                  break;
              }
          }
      }
      cout<<endl;
    }
    return 0;
}

