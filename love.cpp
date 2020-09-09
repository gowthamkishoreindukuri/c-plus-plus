#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int tmp,ma,mi;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if(i==0)
        {
            ma=mi=tmp;
        }
        else
        {
            if(tmp>ma)
            {
                ma=tmp;
                c++;
            }
            if(tmp<mi)
            {
                mi=tmp;
                c++;
            }
        }
    }
    cout<<c<<endl;
}
