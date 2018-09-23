#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;
	while (cin >> n) {
		int i = 0;
		while (i < n.length()-1)
			cout << n[i] << "0", ++i;
		cout << n[i] << "\n";
	}

	return 0;
}