#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    int mx=0,mi=0;
    //cout<<"ok"<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=a[mi])
        {
            mi=i;
        }
        if(a[i]>a[mx])
        {
            mx=i;
        }
    }

    int s=0;
    if(mi<mx)
    {
        s-=1;
    }
    //cout<<s<<mi<<mx<<endl;
    s=s+n-mi-1;
    s=s+mx;
    cout<<s<<endl;
    return 0;
}
