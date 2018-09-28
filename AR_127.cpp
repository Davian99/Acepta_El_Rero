#include <iostream>
#include <string>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	string p[52];
	int casos, n, camas ,song, i;
	cin >> casos;
	while (casos--) {
		n = 0;
		cin >> p[0];
		while (p[n] != "F") {
			++n;
			cin >> p[n];		
		}
		cin >> camas >> song;
		if (camas >= n)
			cout << "TODOS TIENEN CAMA\n";
		else if (camas == 0)
			cout << "NADIE TIENE CAMA\n";
		else {
			i = 0;
			while (n > camas) {
				i += (song - 1) % n; 
				i %= n;
				for (int j = i; j < n - 1; ++j)
					p[j] = p[j + 1];
				--n;
			}
			for (int i = 0; i < n-1; ++i)
				cout << p[i] << " ";
			cout << p[n-1] << "\n";
		}
	}
	return 0;
}