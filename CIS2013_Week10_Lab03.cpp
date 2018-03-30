#include <iostream>
using namespace std;

#define DEBUG false

int main() {

	int n, m, n1, m1;

	cout << "Choose first number :";
	cin >> n;
	cout << "Choose second number : ";
	cin >> m;

	n1 = n;
	m1 = m;

	while (m1 != n1) {
		if (m1 > n1)
			n1 += n;
		else
			m1 += m;
	}

	cout << "lcm is " << m1 << endl;

	for (int i = n;i <= m;i++) {
		int j = 2;
		bool prime = true;

		if (DEBUG) { cout << "Testing prime number for " << i << endl; }

		while (j<i) {
			if (DEBUG) { cout << "Is " << j << " divisiale in " << i << endl; }
			if (i%j == 0) {
				prime = false;
				j = i;
			}
			else {
				j++;
			}
		}

		if (prime) { cout << i << " is prime " << endl; }

	}
	system("pause");
	return 0;
}
