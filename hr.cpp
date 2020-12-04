#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        set<int> st;
        if(a==1)
        {
            st.insert(b);
        }
        else if(a==2)
        {
            st.erase(b);
        }
        else if(a==3)
        {

            if(st.find(b)!=st.end())
            {
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}

