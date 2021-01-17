#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    cin>>a>>b;
    int res=0;
    if(b>a)
    {
        cout<<-1<<endl;
    }
    else
    {

        if(a%2==0)
        {
            res=a/2;
        }
        else
        {
            res=(a/2)+1;
        }
        while(res%b!=0)
        {
            res++;
        }
        cout<<res<<endl;
    }
}
