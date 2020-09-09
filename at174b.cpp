#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,d,a,b,s=0;
    cin>>n>>d;
    for(float i=0;i<n;i++)
    {
        cin>>a>>b;
        if(pow(d,2)>=pow(a,2)+pow(b,2))
        {
            s++;
        }
    }
    cout<<s<<endl;
}

