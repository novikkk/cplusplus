#include <iostream>

class A {
public:
	A() {
		std::cout << "A";
	}
	~A() {
		std::cout << "a";
	}
};

class B {
public:
	B() {
		std::cout << "B";
	}
	~B() {
		std::cout << "b";
	}
};

class C {
public:
	C() {
		std::cout << "C";
	}
	~C() {
		std::cout << "c";
	}
};
A a;
void main() {
	C c;
	B b;
}

//ACBbca