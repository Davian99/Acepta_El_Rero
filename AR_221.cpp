#include <iostream>
using namespace std;

int main() {
	int casos, vec, num, contImpar;
	bool impar = false;
	bool respuesta = true;
	cin >> casos;
	for (int i = 0; i < casos; ++i) {
		cin >> vec;
		impar = false;
		contImpar = 0;
		for (int j = 0; j < vec; ++j) {
			cin >> num;
			if (num % 2 != 0)
				impar = true, ++contImpar;
			else if (num % 2 == 0 && impar)
				respuesta = false;
		}
		if (respuesta)
			cout << "SI " << vec - contImpar << "\n";
		else
			cout << "NO" << "\n";
		respuesta = true;
	}

	return 0;
}