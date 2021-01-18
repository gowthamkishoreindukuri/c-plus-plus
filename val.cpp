#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,s;
    cin>>n>>v;
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int tmp;
        bool b = false ;
        for(int j=0;j<s;j++)
        {
            cin>>tmp;
            if(tmp<v && !b)
            {
                b=true;
                res.push_back(i+1);

            }
        }
    }
    sort(res.begin(),res.end());
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}
