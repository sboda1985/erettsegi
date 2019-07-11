#include <iostream>

using std::cin;
using std::cout;

int impare(int n) {
	int x = 1;

	while (n/x) {
		if (((n / x) % 10) % 2 == 1) {  // (n/x) a szam a feldolgozott szamjegyek nelkul; %10 ennek az utolso szamjegye; %2 a szamjegy paritasa
			n -= x;
		}

		x *= 10;
	}

	return n;
}

int main()
{
	int n;
	cout << "n=";
	cin >> n;
	cout << impare(n);

	return 0;
}

