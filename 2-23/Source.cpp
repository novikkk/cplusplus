#include <iostream>
using namespace std;
class C1 {
public:
	C1() {
		
	}
	void output() {
		cout << "C1::output()" << endl;
	}
};
class C2: virtual public C1
{
public:
	C2():C1(){}
	void output() {
		cout << "C2::output()" << endl;
	}
};

void main() {
	C1 *q = new C2;
	C2 *p = dynamic_cast<C2*>( q );
	if (p != NULL)
		p->output();
}

// A