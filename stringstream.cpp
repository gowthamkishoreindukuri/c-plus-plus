#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<string> parseInts(string str) {
	// Complete this function
	vector<string> vv;
	stringstream s(str);
	while(s.good())
    {
        string ss;
        getline(s,ss,',');
        vv.push_back(ss);
    }
    return vv;
}

int main() {
    string str;
    cin >> str;
    vector<string> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
