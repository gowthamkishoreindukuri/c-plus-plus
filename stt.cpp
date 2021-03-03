#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<string> a , vector<string> b)
{
    return a.size() < b.size();
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    string s[n],tmp[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        string tt=s[i];
        sort(tt.begin(),tt.end());
        tmp[i]=tt;
    }
    vector<vector<string> > res;
    for(int i=0;i<n;i++)
    {
        if(tmp[i]=="--")continue;
        vector<string> ans;
        ans.push_back(s[i]);
        for(int j=0;j<n;j++)
        {
            if(i==j || tmp[j]=="--")continue;
            if(tmp[i]==tmp[j])
            {
                ans.push_back(s[j]);
                tmp[j]="--";
            }
        }
        res.push_back(ans);
    }

    //std::sort(res.begin(), res.end(), [](const vector<int> & a, const vector<int> & b){ return a.size() < b.size(); });
    sort(res.begin(),res.end(),cmp);
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
