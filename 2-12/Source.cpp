#include <iostream>
#include <fstream>
using namespace std;
void main(void) {
	char fname[] = "data.txt";
	double x = 100;
	ifstream ifs (fname,ios::in | ios::binary);

	//ifs.getline((float*)&x, sizeof(x));
	ifs >> x;
	//ifs.get((char&)&x);
	//ifs.read((char*)&x, sizeof(x));
	//x = ifs.get();
	cout << x << endl;

	return;
}