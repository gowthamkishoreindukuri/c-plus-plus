#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ff;
    cin >> ff;
    for(int i=0;i<ff;i++)
    {
    int n;
    cin >>n;
    int exp=n;
    for(;;)
    {
        exp=exp+(n/10);
        if(n/10==0)
        {
            break;
        }
        n=(n%10)+(n/10);
    }
    cout << exp << endl;
}
}
