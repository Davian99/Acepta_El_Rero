#include <iostream>
#include <math.h>
using namespace std;

long long escudos(long long t);

long long escudos(long long t) {
	long long ret = 0;
	int s;
	while (t > 0) {
		s = sqrtf(t);
		t -= s * s;
		ret += s * 4 + s * s;
	}
	return ret;
}



int main() {
	//freopen("in.txt", "r", stdin);
	long long num;
	cin >> num;
	while (num != 0) {
		cout << escudos(num) << "\n";
		cin >> num;
	}
	return 0;
}