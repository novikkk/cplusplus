#include "iostream" 
using namespace std;
class C {
	int x;
private:
	int GetX() {
		return x;
	}
public:
	C(int x=0) { 
		this->x = x; 
	}
};
int main(void) {
	C a(4);
	cout << a.GetX() << endl;
	return 0;
}