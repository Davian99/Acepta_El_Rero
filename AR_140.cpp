#include <iostream>
#include <string>
using namespace std;

void digitos(string n);


// {Pre: n > 0}
void digitos(string n) {
	int i = 0;
	int suma = 0;
	//{ I: 0 <= i < longitud(n) - 1
	//  suma : P.t j : 0 <= j < i - 1 : n[j] }
	while (i < n.length() - 1) {
		cout << n[i] << " + ";
		suma += n[i] - '0';
		++i;
	}
	suma += n[i] - '0';
	cout << n[i] << " = " << suma << "\n";
}
//{Post: true}


int main() {
	//freopen("in.txt", "r", stdin);
	string num;
	cin >> num;
	while (stoi(num) >=  0) {
		digitos(num);
		cin >> num;
	}
	return 0;
}