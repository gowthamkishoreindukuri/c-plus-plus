#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //unordered_map<int> mp;
        int tmp,oc=0,tc=0;
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            tmp==1?oc++:tc++;
        }
        if(oc%2==1 || (oc==0 && tc%2==1))
        {
            cout<<"NO"<<endl;
        }
        else if(tc%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(tc%2==1)
        {
            cout<<"YES"<<endl;
        }
    }
}
