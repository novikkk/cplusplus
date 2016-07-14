#include<iostream>
using namespace std;
template <class T>
T dec(int t = 0) {
	return --t;
}

void main() {
	int x = 3;
	cout << dec(x) << endl;
}
