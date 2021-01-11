#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
   //fast;
   int s,n;
   cin>>s>>n;
   int a,b;
   map<int,int> mp;
   for(int i=0;i<n;i++)
   {
       cin>>a>>b;
       if(mp[a]>0)
       {
           mp[a]+=b;
       }
       else{
       mp[a]=b;
       }
   }
   for(auto i:mp)
   {

       if(s<=i.first)
       {
           cout<<"NO"<<endl;
           return 0;
       }
        s+=i.second;
   }
   cout<<"YES"<<endl;
   return 0;
}
