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
        int i=0,cnt=0;
        for(;;)
        {
            int j=0,res=0;
            for(;;)
            {
                int tmp=((2020*(i))+2021*(j));
             res+=tmp;
             if(n%res==0)
             {
                 break;
                 cnt=1;
             }
             if(res>n)
             {
                 break;
             }
             j++;
            }
            i++;
            if(cnt==1)
            {
                cout<<"YES"<<endl;
                break;
            }
            if(!cnt)
            {
                cout<<"NO"<<endl;
            }
        }

    }
}

