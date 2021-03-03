#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    vector<vector<string> > res;
    for(int i=0;i<n;i++)
    {
        if(s[i]=="--")continue;
        vector<string> ans;
        ans.push_back(s[i]);

        for(int j=0;j<n;j++)
        {
            int r1=0,r2=0;
            if(i==j || s[j]=="--")continue;
            string s1,s2;
            s1=s[i];
            s2=s[j];
            accumulate(s1.begin(),s1.end(),r1);
            accumulate(s2.begin(),s2.end(),r2);
            cout<<r1<<" "<<r2<<endl;
            if(r1==r2)
            {
                ans.push_back(s[j]);
                s[j]="--";
            }
        }
        res.push_back(ans);
    }
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
