#include <iostream>
using namespace std;

int main() {
	int rep;
	long long aux;
	long long est[100000];
	long long int resta, cont, result;

	cin >> rep;
	while (rep != 0) {
		resta = 0;
		cont = 0;
		for (int i = 0; i < rep; ++i) {
			cin >> aux;
			resta += (aux * (aux - 1)) / 2;
			cont += aux;
		}
		result = ((cont * (cont - 1)) / 2) - resta;
		cout << result << "\n";
		cin >> rep;
	}
	return 0;
}