#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,tmp;
    cin>>n>>q;
    int a,b;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        v.push_back(tmp);
    }
    for(int i=0;i<q;i++)
    {
        set<int> s;
        cin>>a>>b;
        s.insert(v[a],v[b]);
        cout<<s.size()<<endl;
    }
}
