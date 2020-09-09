#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[12];
    int ss=0;
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
        ss=ss+a[i];
    }
    if(ss<n)
    {
        cout<<-1<<endl;
        return 0;
    }
    sort(a,a+12);
    int s=0;
    int t=0;
    for(int i=11;i>=-1;i--)
    {
        if(s>=n)
        {
            cout<<t<<endl;
            return 0;
        }
        if(i!=-1)
        {
            s=s+a[i];
        t++;
        }


    }
}
