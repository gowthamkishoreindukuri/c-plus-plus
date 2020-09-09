
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,tmp;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        v.push_back(tmp);
    }
    int a,b;
    cin>>a;
    v.erase(v.begin()+a-1);
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(int &x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
