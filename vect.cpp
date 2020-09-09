#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int n,tmp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int &x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}

