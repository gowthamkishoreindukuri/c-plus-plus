#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tmp=0,cnt=0,val,val2=-1,qm=0;
        cin>>n;
        string a;
        cin>>a;
        for(int i=0;i<n-6;i++)
        {
            if((a[i]=='a' || a[i]=='?') && (a[i+1]=='b' || a[i+1]=='?') && (a[i+2]=='a' || a[i+2]=='?') && (a[i+3]=='c' || a[i+3]=='?') && (a[i+4]=='a' || a[i+4]=='?') && (a[i+5]=='b' || a[i+5]=='?') && (a[i+6]=='a' || a[i+6]=='?') )
            {
            if((a[i]=='?') || (a[i+1]=='?') || ( a[i+2]=='?') || (a[i+3]=='?') || (a[i+4]=='?') || (a[i+5]=='?') || (a[i+6]=='?') )
            {
                qm++;
            }
            else
            {
                val2=i;
            }

                val=i;
                tmp=1;
                cnt++;
            }
        }
        if(tmp==0 || !(cnt-qm<=1))
        {
            cout<<"No"<<endl;
        }
        else
        {

        int i;
            if(val2!=-1)
            {
                i=val2;
            }
            else{
               i=val;
            }
            cout<<"Yes"<<endl;
                for(int j=0;j<i;j++)
                {
                    if(a[j]=='?')
                    {
                        cout<<'d';
                    }
                    else
                    {
                        cout<<a[j];
                    }
                }
                cout<<"abacaba";
                for(int j=i+7;j<n;j++)
                {
                    if(a[j]=='?')
                    {
                        cout<<'d';
                    }
                    else
                    {
                        cout<<a[j];
                    }
                }
            cout<<endl;
        }
    }
}
