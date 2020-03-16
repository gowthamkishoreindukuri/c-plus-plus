#include<bits/stdc++.h>
using namespace std;
int revin(string c,int n)
{

}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string k,rev,rev2;
        cin>>k;
        for(int j=0;j<k.length();j++)
        {
            rev=revin(k,j+1);
            if(rev.compare()>0)
            {
                rev2=rev;
            }

        }
    }
}
