#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(10,1);
    for(int x=0;x<a.size();x++)
    {
        cout<<a[x]<<endl;
    }
    cout<<a.capacity()<<endl;
}
