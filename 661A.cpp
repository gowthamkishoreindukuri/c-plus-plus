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
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if(!(abs(a[i]-a[i+1])==1 || abs(a[i]-a[i+1])==0))
            {
                c++;
            }
        }
        if(c==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
