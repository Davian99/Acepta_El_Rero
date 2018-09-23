#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	string soy, nombre;
	cin >> num;
	while (num--) {
		cin >> soy >> nombre;
		cout << "Hola, " << nombre << ".\n";
	}
	return 0;
}