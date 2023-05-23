#include <iostream>
#include <string>
using namespace std;

int bj2083() {

	string name;
	int age, weight;

	while (true) {
		cin >> name >> age >> weight;

		if (name == "#") break;

		if (age > 17 || weight >= 80) cout << name << " Senior" << endl;
		else cout << name << " Junior" << endl;
	}
	return 0;
}