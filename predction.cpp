#include<bits/stdc++.h>
using namespace std;
bool prm(int n)
{
    for (int i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a+1;i<=b;i++)
    {
        if(prm(i))
        {
            if(i==b)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
