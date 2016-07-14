#include <iostream>
using namespace std;
class C {
	int x;
public:
	C(int x = 0) {
		this->x = x;
	}
	operator int() {
		return x;
	}
};

void main() {
	C a(2);
	int x = a + 3;
	cout << x << endl;
}
//5