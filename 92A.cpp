#include<bits/stdc++.h>
#include<numeric>
using namespace std;
#define f(a,b) for(int i=a;i<b;i++)
#define ll long long

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        if(l%2==0)
        {
            cout<<l<<" ";
            if(r%2==0)
            {
                cout<<r<<endl;
                cout<<lcm(l,r)<<endl;
            }
            else
            {
                cout<<r-1<<endl;
                cout<<lcm(l,r-1)<<endl;
            }


        }
        else{
            cout<<l+1<<" ";
            if(r%2==0)
            {
                cout<<r<<endl;
                cout<<lcm(l+1,r)<<endl;
            }
            else
            {
                cout<<r-1<<endl;
                cout<<lcm(l+1,r-1)<<endl;
            }
        }
    }
    return 0;
}
