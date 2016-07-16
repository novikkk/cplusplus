
#include <iostream>
using namespace std;

class C1 {
public:
	int x;
	C1(int y = 0) :x(y) {}
	void Set(int x) {
		this->x = x;
	}
	virtual int Get(void) = 0;
};

class C2 : public C1
{
	C1 a;
public:
	C2(int x = 0, int y = 0) :C1(x), a(y) {}
	void Set(C1 x) {
		a = x;
	}
	int Get(void) {
		return a.x;
	}
};

int main(void) {
	C1* p = new C2(2, 3);
	p->Set(4);
	cout << p->Get() << endl;
}

//D