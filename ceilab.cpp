#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,sub;
	cin>>a>>b;
	sub=a-b;

	if(sub%10==0)
	{
	    sub=sub+1;
	    cout<<sub<<endl;
	}
	else if(sub==1)
	{
	    cout<<2<<endl;
	}
	else
	{
	    sub=sub-1;
	    cout<<sub<<endl;
	}
	return 0;
}
