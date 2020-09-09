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
        int a[n],s=0;
        int tmp,c1=0,c2=0,c0=0;
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            a[i]=tmp%3;
            if(a[i]==1)
            {
                c1++;
            }
            else if(a[i]==2)
            {
                c2++;
            }
            else if(a[i]==0)
            {
                c0++;
            }
        }
        s=c0+min(c1,c2);
        int m=min(c1,c2);
        c1-=m;
        c2-=m;
        s=s+((c1+c2)/3);
        cout<<s<<endl;
    }
}
