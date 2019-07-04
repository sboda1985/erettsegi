#include <iostream>

using std::cin;
using std::cout;

bool sim(int t[][21], int m, int n) { //int **t

	for (int i = 0; i < m / 2; ++i) {
		for (int j = 0; j < n; ++j) {
			if (t[i][j] != t[i][n - 1 - j]) return false;
		}
	}

	return true;
}


int main()
{
	int n, m;

	cout << "m=";
	cin >> m;
	cout << "n=";
	cin >> n;

	int t[21][21];


	/*
	int** t = new int* [m];

	for (int i = 0; i < m; i++) {
		t[i] = new int[n];
	}
	*/

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "t[" << i << "][" << j << "]=";
			cin >> t[i][j];
		}
	}

	if (sim(t, m, n)) cout << "Da";
	else cout << "Nu";

	/*
	for (int i = 0; i < m; i++) {
		delete[] t[i];
	}

	delete[] t;
	*/

	return 0;
}

