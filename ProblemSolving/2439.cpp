#include <iostream>
#include <string>
using namespace std;

int boj2439() {

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (n - j - i <= 1) cout << '*';
			else cout << ' ';
		}
		cout << endl;
	}
	return 0;
}