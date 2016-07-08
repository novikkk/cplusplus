#include <stdio.h>
#include <iostream>
using namespace std;
int main(void) {
	int a [] = { 4, 5, 6 };
	typedef int vector[3];
	vector &r = a;
	r[2] >>= 1;
	cout << a[2] << endl;
	return 0;
}