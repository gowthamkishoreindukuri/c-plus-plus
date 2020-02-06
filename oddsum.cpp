#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f;
    cin>>f;
    for(int k=0;k<f;k++)
    {
     int n;
  cin >>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int l=accumulate(a,a+n,0);
  if(l%2==0)
  {
      cout<<"NO"<<endl;
  }
  else{
     cout<<"YES"<<endl;
  }
    }
}


