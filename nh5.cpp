#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    for(int i=0;i<nn;i++)
    {
         int n,g,b;
         float n1;
         long long s=0;
    cin>>n>>g>>b;
    n1=n;
    if(g>n)
    {
        cout<<n<<endl;
    }
    else
    {
        int v=ceil(n1/2);

        for(;;)
        {
           s=s+g+b;
           v=v-g;

           if(v<1)
           {
               s=s-b;
               break;

           }

        }
            cout<<s<<endl;

    }
    }
   return 0;
}
