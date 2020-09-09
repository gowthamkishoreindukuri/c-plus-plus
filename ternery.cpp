#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x0,x1,x2,y0,y1,y2;
        cin>>x0>>x1>>x2>>y0>>y1>>y2;
        int s=0;
        int m;
        m=min(x0,y2);
        x0-=m;
        y2-=m;
        m=min(x1,y0);
        x1-=m;
        y0-=m;
        s=2*(min(x2,y1));
        s=s-(2*(min(x1,y2)));
        cout<<s<<endl;
    }
}
