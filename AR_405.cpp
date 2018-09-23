#include <iostream>
using namespace std;

int main() {
	long long act, last, aux, cadena;
	cin >> last;

	while (last != 0) {
		cin >> act;
		cout << last;
		cadena = 0;
		aux = 0;
		while (act != 0 && last != 0) {
			if (act != (last + 1) && cadena > 0)
				cout << "-" << last << "," << act, cadena = 0;
			else if (act != (last + 1))
				cout << "," << act;
			else
				cadena++;
			aux = act - last;
			last = act;
			cin >> act;
			if (act == 0 && aux == 1)
				cout << "-" << last;
				
		}
		cout << "\n";
		cin >> last;
	}
	return 0;
}