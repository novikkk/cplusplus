#include <iostream>
class A {
public:
	void f1() {
		std::cout << "A";
	}
};
class B : public A {
public:
	void f1() {
		std::cout << "B";
	}
};

void f2(A& a) {
	a.f1();
}
void main() {
	B b;
	f2(b);
}

//A