#include <iostream>
#include <string>
using namespace std;

int boj1264() {
	int cnt;

	string str;

	while (true) {
		getline(cin, str);

		if (str[0] == '#') break;

		cnt = 0;
		int strlength = str.length();
		for (int i = 0; i < strlength; i++) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') cnt++;
			if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}