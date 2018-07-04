#include <iostream>
using namespace std;

int main() {

	const int NSIZE = 5;
	int numbers[NSIZE] = { 0, 1, 2, 3, 4 };

	int *pStart = &numbers[0];
	int *pEnd = &numbers[NSIZE];

	while (pStart != pEnd) {

		cout << *pStart << flush;
		pStart++;
	}

	cout << endl;
	cout << endl;

	int *pStart1 = &numbers[0];
	int *pEnd1 = &numbers[NSIZE];

	cout << (pStart1 + 2) - (pEnd1 - 1) << endl;
	cout << *pStart1<< endl;

	return 0;
}
