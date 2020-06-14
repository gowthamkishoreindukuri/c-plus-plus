#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int si=s.size();
    int c=0,pc=0,pr;
    for(int i=0;i<si;i++)
    {
        pr=c;
      if(s[i]=='D')
      {
          c--;

      }
      else
      {
          c++;
      }
    if(c==0 && pr<0)
      {
          pc++;
      }
    }
    cout<<pc<<endl;
}
