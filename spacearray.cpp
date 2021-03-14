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
        int tmp= (n*(n+1))/2;
        int tmp2=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            tmp2+=a[i];
        }
        int check = tmp-tmp2;
        if(check==0 || check%2==1)
        {
            cout<<"First"<<endl;
        }
        else
        {
            cout<<"Second"<<endl;
        }
    }
}
