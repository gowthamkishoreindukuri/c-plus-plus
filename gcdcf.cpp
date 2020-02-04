#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b%a, a);
}
int countPairs(int G, int L,int a1,int b)
{

	int count = 0;

	int p = G*L;

	for (int a=1; a<=L; a++)
		if (!(p%a) && gcd(a, p/a)==G && a1<a<b)
			count++;

	return count;
}
int main()
{
	int G , L,a1,b ;
	cin >> a1>>b>>G>>L;
	cout << countPairs(G, L,a1,b);
	return 0;
}

