#include <iostream>
using namespace std;

class C1 {
protected:
	int x;
public:
	C1(int x = 0) {
		this->x = x;
	}
	int GetX(void) {
		return x;
	}
};

class C2 :protected C1 {
	int y;
public:
	C2(int x = 0, int y = 0) {
		this->y = y;
	}
	int GetY() {
		return y;
	}
};

void main() {
	C2 c(2, 3);
	cout << c.GetX() << ' ' << c.GetY << endl;
}

//G