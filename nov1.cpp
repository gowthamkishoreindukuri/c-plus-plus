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
        sort(a,a+n);
        int i=0,j=n-1;
        int tm=0;
        while(i<=j)
        {
            int tmp=a[j]-a[i];
            if(tmp==0)
            {
                j--;
                tm+=a[j+1];
                i++;
            }
            else if(tmp<0)
            {
                a[i]=abs(tmp-0);
                j--;
                tm+=a[j+1];

            }else
            {
                a[j]=tmp;
                tm+=a[i];
                i++;
            }

        }
        cout<<tm<<endl;
    }
}
