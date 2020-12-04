#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    int sz=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int s=0;
            for(int k=i;k<=j;k++)
            {
                s=s+a[k];
            }
            if(s>=sum && sz>(abs(j-i+1)))
            {
                sz=(abs(j-i+1));
            }
        }
    }
    cout<<sz<<endl;
}
