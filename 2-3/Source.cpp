#include <iostream>
using namespace std;

class C {
	int x;
public:
	C(int x = 0) {
		this->x = x;
	}
	
	C operator()(int y) {
		return C(x + y);
	}
	void out() {
		cout << x << endl;
	}
};

void main() {
	C a = C(3);
	a(2).out();
}

//5