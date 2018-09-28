#include <iostream>
#include <string>
using namespace std;

string polidiv(string num) {
	string ret = "POLIDIVISIBLE";
	int n = num.length();
	long double d = stoll(num);
	unsigned long long ll = stoll(num);
	while (n > 1) {
		if (d / n != ll / n) {
			ret = "NO POLIDIVISIBLE";
			n = 0;
		}
		else {
			num.pop_back();
			d = stoll(num);
			ll = stoll(num);
			--n;
		}	
	}	
	return ret;
}

int main() {
	//freopen("in.txt", "r", stdin);
	string num;
	while (cin >> num) {
		cout << polidiv(num) << "\n";
	}
	return 0;
}