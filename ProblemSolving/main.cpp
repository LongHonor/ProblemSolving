#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	long a, b;
	long result;

	cin >> t;

	while (t--) {
		cin >> a >> b;
		result = a;
		b = b % 4 + 4;

		for (int i = 2; i <= b; i++) {
			result = result * a % 10;
		}

		if (result == 0) result = 10;

		cout << result << endl;
	}
	
	return 0;
}