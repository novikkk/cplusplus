#include <iostream>
using namespace std;
class C1 {
	int x;
public:
	C1(int x1 = 0) :x(x1) {}
	int get() { return x;}
	friend class C2;
};
class C2 {
	C1 *p;
public:
	C2(int y = 0) {
		p = new C1(y);
	}
	int get() {
		return p->x;
	}
};
void main(void) {
	C1 a(2);
	C2 b(1);
	cout << a.get() << ' ';
	cout << b.get() << endl;
}

//2 1