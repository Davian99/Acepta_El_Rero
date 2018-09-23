#include <iostream>
using namespace std;

int main() {
	int num, max, ret;
	int mon[100000];

	cin >> num;
	while (num != 0) {
		for (int i = 0; i < num; ++i)
			cin >> mon[i];
		max = mon[num - 1];
		ret = 1;
		for (int i = num - 2; i >= 0; --i) {
			if (mon[i] > max) {
				max = mon[i];
				++ret;
			}
		}
		cout << ret << "\n";
		cin >> num;
	}

	return 0;
}