// CPP program to illustrate
// boost::math::lcm function of C++
#include <iostream>
#include <boost/math/common_factor.hpp>

using namespace std;

int main()
{
	cout << "LCM(10,20) = " << boost::math::lcm(10,20)
		<< endl;
	return 0;
}
