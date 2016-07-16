#include <iostream>

using namespace std;

template <class T>
class C1 {
protected:
	T x;
public:
	C1(T x1):x(x1){}
	void output() {
		cout << x << endl;
	}
};

template <class T>
class C2 : public C1<T> {
	T y;
public:
	C2(T x1, T y1):C1(x1), y(y1){}

	void output() {
		cout << x << ' ' << y << endl;
	}
};

void main(void) {
	C2<long> *p = new C2<int>(3, 4);
	p->output();
}