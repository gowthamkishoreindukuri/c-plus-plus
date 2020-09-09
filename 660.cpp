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
        if(n<31)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            if((n-(6+10+14))==6 || (n-(6+10+14))==10 || (n-(6+10+14))==14)
            {
                if(n<32)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                 cout<<6<<" "<<10<<" "<<15<<" "<<(n-(6+10+15))<<endl;
                }

            }
            else
            {
                cout<<6<<" "<<10<<" "<<14<<" "<<(n-(6+10+14))<<endl;
            }

        }
    }
    return 0;
}
