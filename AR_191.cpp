#include <iostream>
using namespace std;

int litros(int n, int cap, int dif) {
	int ret = 0;
	int c = 0;
	while (c < n) {
		ret += cap;
		cap -= dif;
		++c;
	}

	return ret;
}

int main() {
	//freopen("in.txt", "r", stdin);
	int casos, n, cap, dif;
	cin >> casos;
	while (casos--) {
		cin >> n >> cap >> dif;
		cout << litros(n, cap, dif) << "\n";
	}
	return 0;
}