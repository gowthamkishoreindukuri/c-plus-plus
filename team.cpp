#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    queue<int> q1,q2,q3;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            q1.push(i+1);
        }
        else if(a==2)
        {
            q2.push(i+1);
        }
        else{
            q3.push(i+1);
        }

    }
    //cout<<q1.size()<<q2.size()<<q3.size()<<endl;
    cout<<min(q1.size(),(min(q2.size(),q3.size())))<<endl;;
    while(!q1.empty() && !q2.empty() && !q3.empty())
    {
        cout<<q1.front()<<" "<<q2.front()<<" "<<q3.front()<<endl;
        q1.pop();
        q2.pop();
        q3.pop();
    }

    return 0;
}
