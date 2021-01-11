#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;
        cin>>w>>h>>n;
        long long int sum=1;
        while(w%2==0)
        {

            sum*=2;
            w/=2;
        }
        while(h%2==0)
        {
            h/=2;
            sum*=2;
        }
        //cout<<sum<<endl;
        if(sum>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
