#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int tmp=0;
        int r,g,b,w;
        int e=0,o=0;
        cin>>r>>g>>b>>w;
        if(r%2==0)
            {
                e++;
            }
        else
            {
                o++;
            }
             if(g%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
             if(b%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        if(w%2==1)
        {
            if(e==3 || e==2)
            {
                cout<<"Yes"<<endl;
            }
            else if((o==3 || o==2) && r>0 && g>0 && b>0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
               if(e==3)
            {
                cout<<"Yes"<<endl;
            }
            else if((o==3) && r>0 && g>0 && b>0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            }
        }
        else
        {
         if(e==3)
            {
                cout<<"Yes"<<endl;
            }
            else if((o==3) && r>0 && g>0 && b>0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                if(e==3 || e==2)
            {
                cout<<"Yes"<<endl;
            }
            else if((o==3 || o==2) && r>0 && g>0 && b>0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {

            }
            }
            }
        }
    return 0;
}
