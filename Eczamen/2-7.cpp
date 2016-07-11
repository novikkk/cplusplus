#include <stdio.h>
#include <iostream>
using namespace std;

class A {
public:
	int x = 5;
};

A& operator++(A& t, int a) {
	t.x++;
}


void main(void) {
	A a;
	a++;
	cout << a.x;
}