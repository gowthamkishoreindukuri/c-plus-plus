#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,c=0;
    cin >> n>>p;
    int a[2*p],b[2*p];
    for(int i=0;i<2*p;i++)
    {
        cin>>a[i];
    }
    set<int> s;
    for(int j=0;j<2*p;j++)
    {
        s.insert(a[j]);
    }
    int v=s.size();
    if(v==n)
    {
        cout << "I become the guy." <<endl;
    }
    else
    {
        cout << "Oh, my keyboard!" <<endl;
    }
}
