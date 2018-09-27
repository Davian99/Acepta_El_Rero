#include<iostream>
using namespace std;

int picos(int v[], int n);
int valles(int v[], int n);
//{ Pre: 0 <= n <= longitud(v) }
int picos(int v[], int n) /* return ret */{
	int ret = 0;
	int i = 1;

	//{ I: 1 <= i <= n-1
	//  ret: # j : 0 <= j < i - 1 : v[j] > v[j - 1] && v[j] > v[j + 1] }
	while (i < n - 1) {
		if (v[i] > v[i - 1] && v[i] > v[i + 1])
			++ret;
		++i;
	}

	return ret;
}
//{ Post: ret = # i : 1 <= i < n - 1 : v[i] > v[i - 1] && v[i] > v[i + 1]}


//{ Pre: 0 <= n <= longitud(v) }
int valles(int v[], int n) /* return ret */ {
	int ret = 0;
	int i = 1;

	//{ I: 1 <= i <= n-1
	//  ret: # j : 0 <= j < i - 1 : v[j] < v[j - 1] && v[j] < v[j + 1] }
	while (i < n - 1) {
		if (v[i] < v[i - 1] && v[i] < v[i + 1])
			++ret;
		++i;
	}
	return ret;
}
//{ Post: ret = # i : 1 <= i < n - 1 : v[i] < v[i - 1] && v[i] < v[i + 1]}



int main() {
	//freopen("in.txt", "r", stdin);
	int casos, n;
	int p, va;
	int v[10000];

	cin >> casos;

	while (casos--) {
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> v[i];
		p = picos(v, n);
		va = valles(v, n);
		cout << p << " " << va << "\n";
	}
	return 0;
}