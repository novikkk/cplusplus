#include <iostream>
using namespace std;

class C1 {
protected:
	int x;
public:
	C1(int x = 0) {
		this->x = x;
	}
};

class C2 {
protected:
	int x;
public:
	C2(int x = 0) {
		this->x = x;
	}
};

class C3 : public C1, public C2 {
	int x;
public:
	C3(int x = 0, int y = 0, int z = 0) :C1(x) {
		this->x = z;
	}
	void out() {
		cout << C1::x << ' ' << C2::x << ' ' << x << endl;
	}
};

void main() {
	C3 c(2, 3, 5);
	c.out();
}

//2 0 5