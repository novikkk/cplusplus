#include <iostream>

class A {
public:
	virtual void f1() {
		std::cout << "A";
	}
};

class B :public A {
private:
	void f1() {
		std::cout << "B";
	}
};

void f2(A &a) {
	a.f1();
}
void main() {
	B b;
	f2(b);
}

//B