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
    int sz;
    cin>>sz;
    vector<float> v;
    for(int i=0;i<=n-sz;i++)
    {
        float s=0;
        for(int j=i;j<i+sz;j++)
        {
            s=s+a[j];
        }
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<" ";

}
