#include <iostream>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	int n, aux;
	bool id;
	cin >> n;
	while (n != 0) {
		id = true;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> aux;
				if (i == j && aux != 1)
					id = false;
				if (i != j && aux != 0)
					id = false;
			}
		}
		if (id)
			cout << "SI\n";
		else
			cout << "NO\n";
		cin >> n;
	}
	return 0;
}