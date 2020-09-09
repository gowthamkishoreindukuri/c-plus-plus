#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    set<int> s;
    for(int i=1;i<=d;i++)
    {
        if((i%k==0) || (i%l==0) || (i%m==0) || (i%n==0))
        {
            s.insert(i);
        }
    }
    cout<<s.size()<<endl;
}
