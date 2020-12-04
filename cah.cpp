#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    string res;
    stack<char> ss;
    for(int i=0;i<s.size();i++)
        cout<<s[i]<<" ";
    {   if(!ss.empty() && ss.top()==s[i] )
            {
             cout<<ss.top()<<endl;
                ss.pop();
            }
            else{
                ss.push(s[i]);
            }
    }
    if(ss.empty())
    {
        res="Empty String";
    }
    else{
        for(int i=0;i<ss.size();i++)
        {
            res+=ss.top();
            ss.pop();
        }
        reverse(res.begin(),res.end());
    }
    return res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
