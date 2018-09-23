#include <iostream>
using namespace std;

int main() {
	int casos;
	long long num;
	cin >> casos;
	for (int i = 0; i < casos; ++i) {
		cin >> num;
		if (num == 0)
			cout << 1;
		else if (num == 1)
			cout << 1;
		else if (num == 2)
			cout << 2;
		else if (num == 3)
			cout << 6;
		else if (num == 4)
			cout << 4;
		else
			cout << 0;
		cout << "\n";
	}

	return 0;
}