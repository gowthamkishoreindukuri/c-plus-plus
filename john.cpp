#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,m;
        cin>>n>>m;
        long long  a[n],b[m],as=0,bs=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           // as+=a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            //bs+=b[i];
        }
        bool tmp=true;
        int cnt=0;
        while(accumulate(a,a+n,0)<=accumulate(b,b+m,0) && a[0]<b[m-1])
        {
            sort(a,a+n);
            sort(b,b+m);

            swap(a[0],b[m-1]);
            cnt++;
        }

        if((accumulate(a,a+n,0)>accumulate(b,b+m,0)))
        {
            cout<<cnt<<endl;
        }
        else
        {

            cout<<-1<<endl;
        }
    }
}
