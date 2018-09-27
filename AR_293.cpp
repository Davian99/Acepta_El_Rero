#include <iostream>
using namespace std;

long long patas(int i, int a, int c, int e, int n) {
	return (i * 6 + a * 8 + c * 10 + e * n * 2);
}

int main() {
	//freopen("in.txt", "r", stdin);
	long long casos, i, a, c, e, n;
	cin >> casos;
	while (casos--) {
		cin >> i>> a>> c>> e>> n;
		cout << patas(i, a, c, e, n) << "\n";
	}
	return 0;
}