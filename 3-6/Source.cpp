#include <iostream>
using namespace std;
void main(void) {
	char s [] = "4321";
	const char *p = s;
	p += 2;
	*p = '\0';
	cout << s;
}

//D