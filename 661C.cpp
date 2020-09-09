#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],b[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=1;
            cin>>b[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
                int f1,f2,l1,l2;
                i-1>0?f1=i-1:f1=i;
                j-1>0?f2=j-1:f2=j;
                i+1<3?l1=i+1:l1=i;
                j+1<3?l2=j+1:l2=j;
                for(int p=f1;p<=l1;p++)
                {
                    for(int q=f2;q<=l2;q++)
                    {
                        if(a[p][q]==1)
                        {
                            a[p][q]=0;
                        }
                        else
                        {
                            a[p][q]=1;
                        }
                    }
                }
            }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {


            cout<<a[i][j];
        }
        cout<<endl;
    }
}
