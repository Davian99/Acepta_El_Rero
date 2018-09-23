#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int casos, kap, pos;
	int res;
	string num, flip;
	char aux;
	cin >> casos;
	while (casos--) {
		kap = 0;
		res = 0;
		cin >> num;

		while (num.length() < 4) {
			num = "0" + num;
		}

		if (num == "6174")
			cout << "0\n";
		else if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3]) 
			cout << "8\n";
		else {
			while (res != 6174) {
				while (num.length() < 4) {
					num = "0" + num;
				}
				for (int i = 0; i < 4; ++i) {
					aux = num[i];
					pos = i;
					for (int j = i; j < 4; ++j) {
						if (num[j] > aux)
							aux = num[j], pos = j;
					}
					aux = num[i];
					num[i] = num[pos];
					num[pos] = aux;
				}
				
				flip = num;
				for (int i = 0; i < 4; ++i) {
					aux = flip[i];
					pos = i;
					for (int j = i; j < 4; ++j) {
						if (flip[j] < aux)
							aux = flip[j], pos = j;
					}
					aux = flip[i];
					flip[i] = flip[pos];
					flip[pos] = aux;
				}
				res = stoi(num) - stoi(flip);
				num = to_string(res);
				++kap;
			}
			cout << kap << "\n";
		}
	}
	return 0;
}
