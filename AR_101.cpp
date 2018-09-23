#include <iostream>
#include <algorithm>
using namespace std;

int c[1024][1024];
int d[1048576];

bool columnas(long long cm, int n);
bool diagonales(long long cm, int n);
bool eso(long long cm, int n);

int main() {
	int n;
	long long cm, cm_filas;
	bool diabolico, esoterico;
	cin >> n;
	while (n != 0) {
		cm = -1;
		diabolico = true;
		esoterico = false;
		for (int i = 0; i < n; ++i) {
			cm_filas = 0;
			for (int k = 0; k < n; ++k) {
				cin >> c[i][k];
				d[(i*n) + k] = c[i][k];
				cm_filas += c[i][k];
			}
			if (cm == -1)
				cm = cm_filas;
			else if (cm != cm_filas)
					diabolico = false;
		}
		if (diabolico) {
			diabolico = columnas(cm, n);
			if (diabolico) {
				diabolico = diagonales(cm, n);
				if (diabolico) {
					esoterico = eso(cm, n);
				}
			}

		}
		if (esoterico)
			cout << "ESOTERICO\n";
		else if (diabolico)
			cout << "DIABOLICO\n";
		else
			cout << "NO\n";

		cin >> n;
	}
	return 0;
}

bool columnas(long long cm, int n)
{
	bool ret = true;
	long long aux;
	for (int i = 0; i < n; ++i) {
		aux = 0;
		for (int k = 0; k < n; ++k) {
			aux += c[k][i];
		}
		if (aux != cm)
			ret = false;
	}
	return ret;
}

bool diagonales(long long cm, int n)
{
	bool ret = true;
	long long aux1, aux2;
	int j = n - 1;

	aux1 = 0;
	aux2 = 0;
	for (int i = 0; i < n; ++i) {
		aux1 += c[i][i];
		aux2 += c[i][j];
		--j;
	}
	if (aux1 != cm || aux2 != cm)
		ret = false;
	return ret;
}

bool eso(long long cm, int n)
{
	long long cm2, corners = 0, centre, sides = 0;
	bool ret = true;
	cm2 = (4 * cm) / n;
	if (n % 2 == 1) {
		corners += c[0][0] + c[0][n-1] + c[n-1][0] + c[n-1][n-1];
		sides += c[n/2][0] + c[0][n/2] + c[n/2][n-1] + c[n-1][n/2];
		centre = c[n / 2][n / 2] * 4;
		if (corners != cm2 || sides != cm2 || centre != cm2)
			ret = false;
		else {
			sort(&d[0], &d[n*n]);
			for (int i = 0; i < (n*n); ++i) {
				if (d[i] != i + 1)
					ret = false;
			}
		}
	}
	else {
		corners += c[0][0] + c[0][n - 1] + c[n - 1][0] + c[n - 1][n - 1];
		sides += c[n / 2][0] + c[0][n / 2] + c[n / 2][n - 1] + c[n - 1][n / 2]  +  c[(n / 2)-1][0] + c[0][(n / 2)-1] + c[(n / 2)-1][n - 1] + c[n - 1][(n / 2) - 1];
		centre = c[n / 2][n / 2] + c[(n / 2)-1][n / 2] + c[n / 2][(n / 2)-1] + c[(n / 2)-1][(n / 2)-1];
		if (corners != cm2 || sides != (2*cm2) || centre != cm2)
			ret = false;
		sort(&d[0], &d[n*n]);
		for (int i = 0; i < (n*n); ++i) {
			if (d[i] != i+1)
				ret = false;
		}
	}



	return ret;
}
