#include <iostream>
using namespace std;

class C {
	int x;
public:
	C(int x = 0) {
		this->x = x;
	}

	static void Dec() {
		--x;
	}
	int GetX() {
		return x;
	}
};

void main() {
	C b(3);
	C::Dec();
	cout << b.GetX() << endl;
}

//G