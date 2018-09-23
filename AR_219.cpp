#include <iostream>
using namespace std;

int main() {
	int casos, admin, num;
	cin >> casos;
	for (int i = 0; i < casos; ++i) {
		cin >> admin;
		int cont = 0;
		for (int j = 0; j < admin; j++) {
			cin >> num;
			if (num % 2 == 0)
				++cont;
		}
		cout << cont << "\n";
	}
	return 0;
}