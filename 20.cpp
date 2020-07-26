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
    int s=0,tmp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                s++;
            }
        }
    }
    cout<<"Array is sorted in "<<s<<" swaps"<<endl;
   cout<<"First Element: "<<a[0]<<endl;
   cout<<"Second Element: "<<a[n-1]<<endl;
}
