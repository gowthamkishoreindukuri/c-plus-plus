#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        long long cnt=0;
        long long ev = (n*(n+1))/2;
        for(int i=0;i<n;i++)
        {
            long long tmp;
            cin>>tmp;
            a[i]=tmp;
            cnt+=tmp;
        }
        cnt = ev-cnt;
        if(cnt<0)cnt=0;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]>i+1)
            {
                cnt=0;
            }
        }
        cnt%2==1?cout<<"First"<<endl:cout<<"Second"<<endl;

    }
    return 0;
}
