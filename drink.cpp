#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;
    float f=0;
    float t;
    float tt=100;
    for(float i=0;i<n;i++)
    {
        cin>>t;
        f=f+(t/tt);
    }
    cout<<(f/n)*100;
}
