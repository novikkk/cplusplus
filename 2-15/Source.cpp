#include <iostream>
using namespace std;
class A {
public:
	A() {
		cout << "A";
	}
	~A() {
		cout << "a";
	}
};
int i = 1;
void main() {
label:
	A a;
	if (i--)
		goto label;
}

//AaAa