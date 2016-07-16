#include <iostream>

int f(int &a, int &b) {
	a = 2;
	b = 3;
	return a + b;
}

void main() {
	int a = 4;
	int b = 5;
	int c = f(a, a);
	std::cout << a << b << c;
}

//3 5 6