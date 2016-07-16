#include <iostream>

using namespace std;

void out(char const *str) { std::cout << str; }
void out(int num) { std::cout << num; }

void main() {
	out(0);
	out("123");
	out('4');
}


//012352