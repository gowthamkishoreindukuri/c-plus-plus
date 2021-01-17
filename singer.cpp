#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int res=0,cnt=0,t,oc=0;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        oc+=t;
        if(i==n-1)
        {
            res+=t;
            //cout<<res<<endl;
            continue;
        }

        res+=t;
        res+=10;
        //cout<<res<<endl;
    }
    if(res>d)
    {
        cout<<-1<<endl;
        return 0;
    }
    cnt=(d-res)/5;
    //cout<<res<<endl;
    cnt+=(res-oc)/5;
    cout<<cnt<<endl;
    return 0;

}
