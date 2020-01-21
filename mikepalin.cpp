#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin >> s;
int c=1;
int n = s.length();
char a[n + 1];
strcpy(a, s.c_str());
if(n%2==0)
{
    for(int j=0;j<n/2;j++)
    {
        if(a[j]!=a[n-1-j])
        {

            c=c+1;
        }
    }
}
else
{
    for(int k=0;k<(n/2)+1;k++)
    {
        if(a[k]!=a[n-1-k])
        {

            c=c+1;
        }

    }
        if(c==1)
        {
            c=2;
        }
}
if(c==2)
{
     cout << "YES";
}
else
{
    cout << "NO";
}
}
