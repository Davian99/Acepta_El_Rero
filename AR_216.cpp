#include <iostream>
#include <string>
using namespace std;

string goteras(int num) {
	string ret = "";
	int h = 0, m = 0, s = 0;
	h = num / 3600;
	num = num - (h * 3600);
	m = num / 60;
	num = num - (m * 60);
	s = num;

	if (h < 10)
		ret += "0" + to_string(h);	
	else
		ret += to_string(h);
	ret += ":";

	if (m < 10)
		ret += "0" + to_string(m);
	else
		ret += to_string(m);
	ret += ":";

	if (s < 10)
		ret += "0" + to_string(s);
	else
		ret += to_string(s);
	return ret;
}

int main() {
	int casos, s;
	cin >> casos;
	while (casos--) {
		cin >> s;
		cout << goteras(s) << "\n";
	}
	return 0;
}