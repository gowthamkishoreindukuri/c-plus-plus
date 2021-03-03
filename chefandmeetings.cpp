#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string res;
        string t,ap;
        cin>>t>>ap;
        int tt,mm;
        tt=(t[0]-'0')*10 + t[1]-'0';
        mm=(t[3]-'0')*10 + t[4]-'0';
        (ap[0]=='A'&& tt == 12 )?tt-=12:tt-=0;
        (ap[0]=='P'&& tt == 12 )?tt+=1:((ap[0]=='P')?tt+=12:tt+=0);
        int n;
        cin>>n;
        while(n--)
        {
            string t1,t2,ap1,ap2;
            cin>>t1>>ap1>>t2>>ap2;
            int tt1,mm1;
            tt1=(t1[0]-'0')*10 + t1[1]-'0';
            mm1=(t1[3]-'0')*10 + t1[4]-'0';
            (ap1[0]=='A'&& tt1 == 12 )?tt1-=12:tt1-=0;
            (ap1[0]=='P'&& tt1 == 12 )?tt1+=1:((ap1[0]=='P')?tt1+=12:tt1+=0);
            int tt2,mm2;
            tt2=(t2[0]-'0')*10 + t2[1]-'0';
            mm2=(t2[3]-'0')*10 + t2[4]-'0';
            (ap2[0]=='A'&& tt2 == 12 )?tt2-=12:tt2-=0;
            (ap2[0]=='P'&& tt2 == 12 )?tt2+=1:((ap2[0]=='P')?tt2+=12:tt2+=0);
            if((tt1<tt || (tt1==tt && mm1<=mm))&& (tt2>tt || (tt2==tt && mm2>=mm)))
            {
                res+='1';
            }
            else{
                res+='0';
            }
        }
        cout<<res<<endl;
    }
}
