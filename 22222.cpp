#include <iostream>

using namespace std;

int main() {
	for (int a=0; a < 2; a++) {
		for (int b=0; b < 2; b++) {
			for (int c=0; c < 2; c++) {
				for (int d=0; d < 2; d++) {
					cout << a << b << c << d;
					if ((!a <= b) && (b == !c) && !d) {
						cout << a << b << c << d;
					}
				}
			}
		}
	}
}