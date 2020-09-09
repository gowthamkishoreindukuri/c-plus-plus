#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,z;
        cin>>n>>x>>z;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int m=max_element(a,a+x)-a;

        int s=0;
        int i=0;
        for(int i=0;i<x+1;i++){
            if(i!=0 && a[i-2]==a[m] && z)
            {
                z--;
                x--;
                x--;
                i=i-2;
            }

                //cout<<a[i]<<" ";
                s=s+a[i];
        }

        cout<<s<<endl;
    }
    return 0;
}
