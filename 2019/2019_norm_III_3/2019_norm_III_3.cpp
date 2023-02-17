#include <iostream>
#include <fstream>

using std::cout;
using std::ifstream;

int main()
{
	ifstream read("bac.txt");

	int x, max = -1, prev = -1;
	bool w = false;

	while (read >> x) {

		if (x==prev && w) {
			cout << x << " ";
		}
		else if (x > max) {
			cout << x << " ";
			max = x;
			w = true;
		}
		else w = false;

		prev = x;
	}

	return 0;
}