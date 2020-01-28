#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    set<int> s;
    for (int j= 0; j< n; j++)
    {

        s.insert(a[j]);
    }
    int v=s.count(0);
    cout << (s.size()-v) << endl;

}
