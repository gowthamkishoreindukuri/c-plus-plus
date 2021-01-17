#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(i%2==1 || (j==m && (i/2)%2==1) || (j==1 && ((i/2)%2==0)) )
            {
                cout<<'#';
            }
            else
            {
                cout<<'.';
            }
        }
        cout<<endl;
    }
}
