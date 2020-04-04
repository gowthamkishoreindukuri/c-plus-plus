/*............YOUR LIFE SHOULD BE THE ROLE MODEL FOR OTHERS................*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long test;
    cin>>test;
    while(test--)
    {
        int a,b,c,d,x,y,x1,x2,y1,y2;
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        if((((x1<=(x-a+b)) &&((x-a+b)<=x2)) || ((y1<=(y-a+b)) &&((y-a+b)<=y2))&&(!(x==x2 &&x==x1 &&x==d &&x==c &&x==b &&x==a &&x==y &&x==y2 &&x==y1))))
        {
            cout<<"YES"<<(!(x==x2 &&x==x1 &&x==d &&x==c &&x==b &&x==a &&x==y &&x==y2 &&x==y1))<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
