#include <bits/stdc++.h>
using namespace std;
void kFactors(int n, int k)
{
    int c=0;
    vector<int> P;
    while (n%2 == 0)
    {
        P.push_back(2);
        n /= 2;
    }
    for (int i=3; i*i<=n; i=i+2)
    {
        while (n%i == 0)
        {
            n = n/i;
            P.push_back(i);
        }
    }
    if (n > 2)
        P.push_back(n);
    if (P.size() < k)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for (int kk=0; kk<k-1; kk++)
    {
        for(int jj=kk;jj<k-1;jj++)
        {
            if(P[kk]==P[jj])
            {
                c=c+1;
            }
        }
    }
    if(c==0)
    {
        for (int i=0; i<k-1; i++)
        cout << P[i] << " ";
    int product = 1;
    for (int i=k-1; i<P.size(); i++)
        product = product*P[i];
    cout << product << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}
int main()
{
    int gg;
    cin >>gg;
    for(int h=0;h<gg;gg++)
    {
        int n , k = 3;
    cin >> n;
    kFactors(n, k);
    return 0;
    }

}
