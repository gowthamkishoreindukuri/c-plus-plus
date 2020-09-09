#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int tmp;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        a.push_back(tmp);
    }
    int c=0;
    vector<int> b;
    b.push_back(a[0]);
    for(int i=1;i<n;i++)
    {
       // cout<<__gcd(b[i-1],a[i])<<endl;
        if((__gcd(b[i-1],a[i]))!=1)
        {
            c++;
            b.push_back(1);
        }
        b.push_back(a[i]);
    }
    cout<<c<<endl;
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }

}
