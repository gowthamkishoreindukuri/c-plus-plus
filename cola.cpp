#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int val,c=0,tmp=n,fin;
    while(1)
    {
        c++;
        if(c==1)
        {
            val=5;
        }
        else
        {
         val=val*2;
        }
        n=n-val;
        //cout<<val<<endl;
        if(n<0)
        {
         //cout<<tmp<<" "<<val/5<<endl;
         if(((tmp)%(val/5))==0)
         {
          fin=((tmp)/(val/5));
         }
         else
         {
             fin=((tmp)/(val/5))+1;
         }
         break;
        }
        if(n==0)
        {
            fin=5;
            break;
        }
        tmp=n;
    }
    if(fin==1)
    {
        cout<<"Sheldon"<<endl;
    }
    if(fin==2)
    {
        cout<<"Leonard"<<endl;
    }
    if(fin==3)
    {
        cout<<"Penny"<<endl;
    }
    if(fin==4)
    {
        cout<<"Rajesh"<<endl;
    }
    if(fin==5)
    {
        cout<<"Howard"<<endl;
    }
}
