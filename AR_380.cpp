#include <iostream>
using namespace std;

int main() {
	int n;
	int suma, aux;
	cin >> n;
	while (n != 0) {
		suma = 0;
		while (n--) {
			cin >> aux;
			suma += aux;
		}
		cout << suma << "\n";
		cin >> n;
	}
	return 0;
}