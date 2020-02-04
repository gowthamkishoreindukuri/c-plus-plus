#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,c=0;
    cin >>n;
	string s;
	cin >> s;
	char a[n + 1];
	strcpy(a, s.c_str());
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            c=c+1;
        }
    }
    cout <<c <<endl;
}
