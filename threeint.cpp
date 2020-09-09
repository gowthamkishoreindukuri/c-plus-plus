#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        for(int i=a;i<=10000;i++)
        {
          for(int j=b;j<=10000;j++)
            {
               for(int k=c;k<=10000;k++)
                {
                    if(k%j==0 && j%i==0)
                    {
                        cnt++;
                        break;
                    }
                }
            }
        }
    }
}
