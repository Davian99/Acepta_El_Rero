#include <iostream>
using namespace std;

int picos(int v[], int n) {
	int ret = 0;
	int i = 1;
	while (i < n - 1) {
		if (v[i - 1] < v[i] && v[i + 1] < v[i])
			++ret;
		++i;
	}
	if (v[0] > v[1] && v[0] > v[n - 1])
		++ret;
	if (v[n - 1] > v[n - 2] && v[n - 1] > v[0])
		++ret;
	
	return ret;
}

int main() {
	//freopen("in.txt", "r", stdin);
	int a[1000], n;
	cin >> n;
	while (n != 0) {
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		cout << picos(a, n) << "\n";
		cin >> n;
	}
	return 0;
}