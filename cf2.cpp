#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long tmp=n;
        long long cnt=0;
        while(tmp)
        {
            tmp/=2;
            cnt++;
        }
        long long a =(pow(2,cnt-1))-1;
        long long res =(a*(a^n));
        cout<<res<<endl;
    }
}
