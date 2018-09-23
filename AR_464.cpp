#include <iostream>
#include <string>
using namespace std;

typedef struct {
	int tiempo;
	int pose;
	int poss;
} tCorredor;

int stringtoTiempo(string t);

int main() {
	int casos, t = 0;
	tCorredor l[100];
	tCorredor tAux;
	string time;
	while (cin >> casos) {
		for (int i = 0; i < casos; ++i) {
			cin >> time;
			tAux.pose = i;
			tAux.tiempo = stringtoTiempo(time);

			int j = 0;
			while (tAux.tiempo > l[j].tiempo && i != 0 && j < i)
				j++;
			for (int k = i; k > j; --k) 
				l[k] = l[k - 1];
			l[j] = tAux;
		}
		l[0].poss = 1;
		for (int i = 0; i < casos - 1; ++i) {
			if ((l[i + 1].tiempo - l[i].tiempo) <= 1)
				l[i + 1].poss = l[i].poss;
			else
				l[i + 1].poss = i + 2;
		}
		bool encontrado;
		for (int i = 0; i < casos; ++i) {
			int j = 0;
			encontrado = false;
			while (!encontrado)
				if (l[j].pose == i)
					encontrado = true, cout << l[j].poss << "\n";
				else
					++j;
		}
		cout << "---\n";
	}
	return 0;
}

int stringtoTiempo(string t)
{
	string aux = "";
	int tiempo = 0;
	aux += t[0];
	aux += t[1];
	tiempo += stoi(aux) * 3600;
	aux = "";
	aux += t[3];
	aux += t[4];
	tiempo += stoi(aux) * 60;
	aux = "";
	aux += t[6];
	aux += t[7];
	tiempo += stoi(aux);

	return tiempo;
}
