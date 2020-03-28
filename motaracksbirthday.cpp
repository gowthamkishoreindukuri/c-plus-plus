#include<bits/stdc++.h>
using namespace std;
int ser(int a[],int n)
{
    int val;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            val=a[i];
            break;
        }
    }
    return val;
}
int main()
{
    int t;
    cin>>t;
    for(int hh=0;hh<t;hh++)
    {

        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int M=a[n-1];
        int m=ser(a,n);
        int nn=(M+m)/2;
        if(M==-1)
        {
            cout <<0<<" "<<55<<endl;
        }
        else if(M==0)
        {
                       cout <<0<<" "<<0<<endl;
        }
        else
        {
             cout<<(M-nn)<<" "<<nn<<endl;
        }

    }
}
