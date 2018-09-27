#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string triangulo(int v[]) {
	string ret;
	if (v[0] + v[1] <= v[2])
		ret = "IMPOSIBLE";
	else if (v[0] * v[0] + v[1] * v[1] > v[2] * v[2])
		ret = "ACUTANGULO";
	else if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
		ret = "RECTANGULO";
	else
		ret = "OBTUSANGULO";

	return ret;
}


int main() {
	//freopen("in.txt", "r", stdin);
	int casos;
	int a[3];
	cin >> casos;
	while (casos--) {
		cin >> a[0] >> a[1] >> a[2];
		for (int i = 0; i < 3; ++i)
			for (int j = 0; j < 2 - i; ++j) {
				if (a[j] > a[j + 1])
					swap(a[j], a[j + 1]);
			}
		cout << triangulo(a) << "\n";
	}
	return 0;
}