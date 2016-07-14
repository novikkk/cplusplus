#include <iostream>
using namespace std;

void main() {
	char s1[15], s2[15], ch;
	cin.get(s1, sizeof(s1));
	ch = cin.get();
	cin.get(s2, sizeof(s2));
	cout << s1 << "; " << (int)ch << "; " << s2 + 1 << endl;
}
//1234; 10; BC;