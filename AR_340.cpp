#include <iostream>
using namespace std;

int cerillas(int v, int h) {
	int ret = 0;
	int f1;
	if (v == 1 || h == 1)
		ret += 4 + ((v * h) - 1) * 3;
	else {
		f1 = 4 + 3 * (h - 1);
		ret = f1 + (f1 - h) * (v - 1);
	}
	return ret;
}




int main() {
	//freopen("in.txt", "r", stdin);
	int casos, vertical, horizontal;
	cin >> casos;
	while (casos--) {
		cin >> vertical >> horizontal;
		cout << cerillas(vertical, horizontal) << "\n";
	}
	return 0;
}