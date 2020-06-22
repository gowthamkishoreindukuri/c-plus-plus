#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[n];
    string tmp;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        sort(tmp.begin(), tmp.end());
        a[i]=tmp;
    }
    int q;
    cin>>q;
    string b[q];
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        sort(tmp.begin(), tmp.end());
        b[i]=tmp;
    }
    string t;
    int s=0;
    for(int i=0;i<q;i++)
    {
        s=0;
        t=b[i];
        cout<<t;
        for(int j=0;j<n;j++)
        {
            if(t.compare(a[j]))
            {
                s++;
            }
        }
        cout<<s<<endl;
    }
}
