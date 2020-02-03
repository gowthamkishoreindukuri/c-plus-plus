#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
	cin >> s;
    int n=s.length();
   	char a[n + 1];
	strcpy(a, s.c_str());
    putchar(toupper(a[0]));
    for(int i=1;i<strlen(a);i++)
    {
        cout <<a[i];
    }
}
