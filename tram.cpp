#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v=0;
    cin >>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i] >>b[i];
    }
    for(int j=0;j<n-1;j++)
    {
      if(a[j+1]<b[j])
      {
          v=v-a[j+1]+b[j];
      }
      else
      {
          v=v+a[j+1]-b[j];
      }
      c[j]=v;
    }
    sort(c,c+n-1);
    cout << c[n-2] << endl;
}
