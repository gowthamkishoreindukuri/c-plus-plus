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
        int a[n];
        for(int i=0;i<n;i++)
        {

            cin>>a[i];
        }
        int tmp;
        tmp=a[0];
        for(int i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=tmp;
        for(int i=0;i<n;i++)
        {

            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
