#include <iostream>
#include <math.h> 
using namespace std;

double fx(double c[20], int n, int gr, int i);

int main() {
	int grado, n;
	double coef[20];
	double res;
	cin >> grado;
	while (grado != 20) {
		res = 0;
		for (int i = 0; i < grado+1; ++i) 
			cin >> coef[i];
		cin >> n;
		for (int i = 0; i < n; ++i) {
			res += (1.0 / n) * fx(coef, n, grado, i);
		}
		//cout << res << endl;
		if (0.5 - res <= 0.001 and 0.5 - res >= -0.001)
			cout << "JUSTO\n";
		else if (0.5 - res > 0.001)
			cout << "ABEL\n";
		else
			cout << "CAIN\n";
		cin >> grado;
	}
	return 0;
}

double fx(double c[20], int n, int gr, int i){
	double ret = 0, aux;
	int gr_2 = gr;
	for (int k = 0; k < gr + 1; ++k) {
		aux = c[k] * pow((i*(1.0 / n)), gr_2);
		ret += aux;
		--gr_2;
	}
	//ret += c[gr];
	if (ret > 1)
		ret = 1.0;
	else if (ret < 0)
		ret = 0.0;
	return ret;
}
