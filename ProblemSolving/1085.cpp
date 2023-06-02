#include <iostream>
#include <string>
using namespace std;

int boj1085() {

	int x, y, w, h;

	cin >> x >> y >> w >> h;

	int minDistance;

	minDistance = x;
	if (minDistance > y) minDistance = y;
	if (minDistance > (w - x)) minDistance = w - x;
	if (minDistance > (h - y)) minDistance = h - y;

	cout << minDistance;

	return 0;
}