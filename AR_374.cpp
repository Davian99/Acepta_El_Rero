#include <iostream>
using namespace std;

int main() {
	int casos;
	cin >> casos;
	while (casos--) {
		unsigned long long tmax = 0, tmin = 0, aux;
		int repmax = 0, repmin = 0;
		cin >> aux;
		tmin = aux;
		while (aux != 0) {
			if (aux > tmax)
				tmax = aux, repmax = 1;
			else if (aux == tmax)
				++repmax;
			if (aux < tmin)
				tmin = aux, repmin = 1;
			else if (aux == tmin)
				++repmin;
			cin >> aux;
		}
		cout << tmin << " " << repmin << " " << tmax << " " << repmax << "\n";
	}
	return 0;
}