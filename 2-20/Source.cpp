#include <iostream>
using namespace std;
template <class T = int>
class C {
	T t;
public:
	C(T t1):t(t1){}
	C operator*(C &x) {
		return C(t*x.t);
	}
	friend void output(C a) {
		cout << a.t << endl;
	}
};

void main() {
	C<float> b1(2), b2(3);
	output(b1*b2);
}

//6