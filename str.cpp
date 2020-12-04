#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        vector<char> v;
        for(int i=0;i<a.size();i++)
        {

            if(a[i]==a[i+1])
            {
                i++;
            }
            else
            {

                v.push_back(a[i]);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
}
