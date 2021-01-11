#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        stringstream s;
        s << n;
        string ss = s.str();
        for(int i=0;i<ss.size();i++)
        {
            if(ss[i]=='0')
            {
                continue;
            }
            else
            {

                int tmp = ss[i]-'0';
                if(n%tmp==0)
                {
                    continue;
                }
                else
                {
                    n=n+(tmp-(n%tmp));
                }
            }
        }
        cout<<n<<endl;
    }
}
