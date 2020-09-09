#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int tmp=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if(i==0)
        {
            if(tmp%2==0)
            {
                c=1;
            }
            else
            {
                c=0;
            }
        }
        else
        {
            if(tmp%2==0)
            {
                if(c!=0)
                {
                    cout<<"NO";
                    return 0;
                }
                c=1;
            }
            else
            {
                if(c!=1)
                {
                    cout<<"NO";
                    return 0;
                }
                c=0;
            }
        }

    }
    cout<<"YES";
    return 0;

}
