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


void main(void) {
	C1 asddsa(1);
	asddsa.Get();
}