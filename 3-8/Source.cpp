#include <iostream>
using namespace std;

class C1 {
protected:
	int x;
public:
	C1(int x = 0) {
		this->x = x;
	}
	virtual int Get() {
		return x;
	}
};

class C2 : virtual public C1 {
protected:
	int x;
public:
	C2(int x, int y) {

	}
};

void main(void) {
}