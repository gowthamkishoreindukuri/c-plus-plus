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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> tmp;
        for(int i=0;i<n;i++)
        {
            int j=i;
            while(a[j]==a[i])
            {
                j++;
            }
            tmp.push_back(a[i]);
            i=j-1;
        }
        int b[tmp.size()];
        for(int i=0;i<tmp.size();i++)
        {
            int cnt=0;
            for(int j=0;j<tmp.size();j++)
            {
                if(a[i]==a[j] && i!=j){
                    cnt++;
                }
            }
           /* if((i==0 || i==tmp.size()-1))
            {
                cnt--;
            }*/
            b[i]=cnt+1;
        }
        sort(b,b+tmp.size());
        cout<<b[0]<<endl;


    }
}
