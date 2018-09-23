#include <iostream>
using namespace std;

int main() {
	int h, o;
	int c;
	cin >> h >> o;
	while (h != 0) {
		if (h % o == 0) {
			c = (h / o) - 1;
		}
		else
			c = h / o;
		cout << (c + 1) * 10 << "\n";
		cin >> h >> o;
	}
	return 0;
}