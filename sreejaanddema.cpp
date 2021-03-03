#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
     cin>>a[i];
    }
    int ac=0,bc=0;
    int i=0,j=n-1;
    int tmp=0;
    while(i<=j)
    {
        if(tmp==0)
        {
            if(a[i]>a[j])
            {
                ac+=a[i];
                i++;
            }
            else{
            ac+=a[j];
            j--;
            }
            tmp=1;
        }
        else{
            if(a[i]>a[j])
            {
                bc+=a[i];
                i++;
            }
            else{
            bc+=a[j];
            j--;
            }
            tmp=0;
        }
    }
    cout<<ac<<" "<<bc<<endl;
}
