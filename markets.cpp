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
    int nn;
    cin>>nn;
    int aa[nn];
    for(int i=0;i<nn;i++)
    {
        cin>>aa[i];
    }
    int k;
    int tmp;
    signed int tmp2=0;
    for(int i=0;i<n;i++)
    {
        k=abs(a[i]-aa[0]);
        for(int j=nn-1;j>=0;j--)
        {

            tmp=abs(a[i]-aa[j]);
            if(tmp<k)
            {
                cout<<"ok"<<endl;
                tmp2=a[i]-aa[j];
                k=tmp;
            }
            tmp2=a[i]-aa[j];
            cout<<tmp<<endl;
        }
        /*cout<<tmp<<" ";
        if(tmp2<0)
        {
            cout<<"R"<<endl;
        }
        if(tmp2==0)
        {
            cout<<"O"<<endl;
        }
        if(tmp2>0)
        {
            cout<<"L"<<endl;
        }*/
    }
}
