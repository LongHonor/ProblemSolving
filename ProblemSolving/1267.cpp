#include <iostream>
#include <string>
using namespace std;

int boj1267() {
	int n;
	int ysum = 0, msum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;

		ysum += tmp / 30 * 10;
		if (tmp % 29 != 0) ysum += 10;

		msum += tmp / 60 * 15;
		if (tmp % 59 != 0) msum += 15;
	}

	if (ysum < msum) cout << "Y " << ysum << endl;
	else if (ysum == msum) cout << "Y " << "M " << ysum << endl;
	else cout << "M " << msum << endl;

	return 0;
}