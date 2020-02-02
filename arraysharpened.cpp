#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mm;
    cin>>mm;
    for(int mmm=0;mmm<mm;mmm++)
    {
     int n,c=0,c2=0;
    cin >>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int j=0;j<n;j++)
    {
        if(b[j]==a[j])
        {
             c=c+1;
        }
        if(b[n-j-1]==a[j])
        {
            c2=c2+1;
        }
    }
    if((c==n || c2==n ) && (c!=c2|| n==1))
    {
        cout << "Yes" <<endl;
    }
    else
    {
       cout << "No" <<endl;
    }

    }
}
