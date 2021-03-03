#include<bits/stdc++.h>
using namespace std;
class demo
{
private:
    int a,b;
public:
    int sum(int a,int b);
};

int demo:: sum(int a,int b){return (a+b);}

int main()
{
    demo v;
    cout<<v.sum(1,2)<<endl;
}
