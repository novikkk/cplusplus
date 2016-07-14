#include <iostream>
using namespace std;
class C1 {
	char *name;
public:
	C1(char *s = "") {
		name = new char(sizeof(s) + 1);
		strcpy(name, s);
	}
	virtual ~C1() {
		delete[] name;
	}
};

class C2 :public C1 {
public:
	C2(char* s = "") :C1(s) {

	}
};

void main() {
	C1 &a = *new C2("123");
	cout << typeid(a).name() << endl;
}

//class c2