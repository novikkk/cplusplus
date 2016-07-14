#include <iostream>
class X {
public:
	virtual void f() {
		std::cout << "X";
	}
};
class Y : public X {
public:
	void f() {
		std::cout << "Y";
	}
};
void out(X &x) {
	x.f();
}
void main() {
	X a[1];
	Y y1;
	a[0] = y1;
	out(y1);
	out(a[0]);
}

//YX