#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,tmp,num;
    cin>>n>>m;
    vector<vector<int> > v;
    for (int i = 0; i < n; i++) {
        vector<int> v1;
        cin>>tmp;
        for (int j = 0; j < tmp; j++) {
            cin>>num;
            v1.push_back(num);
        }
        v.push_back(v1);
    }
    while(m--)
    {
        cin>>n>>tmp;
        cout<<v[n][tmp]<<endl;
    }
}
