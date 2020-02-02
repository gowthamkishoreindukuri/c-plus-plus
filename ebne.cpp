#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n , s;
    cin >> n>>s;
    int a[n],ss=s;
    for(int i=0;i<n;i++)
    {
        a[n-1-i]= s%10;
        s=s/10;
    }
    int sum=accumulate(a,a+n,0);
    cout << sum;

}
