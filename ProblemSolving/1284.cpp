#include <iostream>
#include <string>
using namespace std;

int boj1284() {
	int num, tmp;
	int length = 0;

	cin >> num;

	while (num != 0) {
		tmp = num;
		length = 1;
		while (tmp != 0) {
			if (tmp % 10 == 0)length += 4;
			else if (tmp % 10 == 1) length += 2;
			else length += 3;
			length++;
			tmp /= 10;
		}
		cout << length << endl;
		cin >> num;
	}

	return 0;
}