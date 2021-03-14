#include<bits/stdc++.h>
using namespace std;
string s;
vector< pair<int,string> > ua;

void append(string str,int check)
{
    if(!check) ua.push_back(make_pair(1,str));
    s+=str;
    return ;
}
void deletechar(int k,int check)
{

    int tmp = s.size()-k;
    string str = s.substr(tmp,s.size());
    s=s.substr(0,tmp);
    if(!check)ua.push_back(make_pair(2,str));

}
void print(int k)
{
    cout<<s[k-1]<<endl;
    return ;
}
void undo()
{
    pair<int,string> tmp;
    tmp=ua[ua.size()-1];
    if(tmp.first==1)
    {
        int cnt = tmp.second.size();
        deletechar(cnt,1);
    }
    else{
        append(tmp.second,1);
    }
}
int main()
{
    int t,tmp;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            string st;
            cin>>st;
            append(st,0);
        }
        else if(n==2)
        {
            cin>>tmp;
            deletechar(tmp,0);
        }
        else if(n==3)
        {
            cin>>tmp;
            print(tmp);
        }else{
            undo();
        }
    }
}
