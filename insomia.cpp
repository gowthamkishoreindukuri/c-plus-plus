#include<bits/stdc++.h>
using namespace std;
int main()
{
    float k,l,m,n,d,c=0;
    cin>>k>>l>>m>>n>>d;
    float j=1;
    for(int i=1;i<d+1;i++)
    {

        if(j%k!=0 &&j%l!=0 && j%m!=0 && j%n!=0)
        {
            c++
        }

    }
    cout << d-c <<endl;
}
