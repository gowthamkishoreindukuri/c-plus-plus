#include <bits/stdc++.h>
using namespace std;
int main( )
{
    int x;
    cin>>x;
    for(int j=0;j<x;j++)
    {

        int i=1, l,r,d;
        cin>>l>>r>>d;
        if(d<l||d>r)
            cout<<d<<endl;
        else
            cout<<(((r/d)*d)+d)<<endl;

    }

}
