#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int ff,m=0;
    long long s=0;
    cin >>ff;
    for(int igkk=0;igkk<ff;igkk++)
    {
        int n;
        cin >>n;
        int a[n],b[n];
        for (int i=0;i<(2*n);i++)
        {
            if(i<n)
            cin >>a[i];
            else
            {
                         cin >>b[i-n];
            }
        }

        sort(b,b+n);
        do {
		for(int cc=0;cc<n;cc++)
        {

              s=s+min(a[cc],b[cc])  ;

        }
        if(m<s)
        {
            m=s;
        }

        s=0;
	} while (next_permutation(b, b + n));
    }

   cout <<m<<endl;

}

