#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
void rot(int a[],int n,int k)
{
    int gd;
    gd=gcd(n,k);
    for(int i=0;i<gd;i++)
    {
        int tmp;
        for(int j=i;j<n;j+=gd)
        {
            if(i==j)
            {
                tmp=a[i];
            }
            if(j+gd>=n)
            {
                a[j]=tmp;
                //cout<<tmp<<endl;
            }
            else
            {
              a[j]=a[j+gd];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    rot(a,n,k);
}
