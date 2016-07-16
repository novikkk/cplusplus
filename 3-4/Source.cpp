#include <iostream>
using namespace std;

void main() {

	class C {
		int x;
	public:
		C(int y = 0) {
			x = y;
		}
		void out();
	};

	void C::out() {
		cout << x << endl;
	}
	C a(3);
	a.out();
}

//B
