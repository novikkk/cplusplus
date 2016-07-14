#include <set>
#include <iostream>
using namespace std;
int main() {
	set <int> s1, s2, s3;
	set<int>::iterator p, q;
	string str1 = "test of";
	string str2 = "the set";
	for (int i = 0; i < str1.size(); i++) {
		s1.insert(str1[i]);
	}
	for (int i = 0; i < str2.size(); i++) {
		s2.insert(str2[i]);
	}
	for (p = s1.begin(); p != s1.end(); p++) {
		q = s2.find(*p);
		if (q == s2.end())
			s3.insert(*p);
	}

	/*for (p = s2.begin(); p != s2.end(); p++) {
		cout << char(*p) << ' ';
	}
	cout << endl;*/
	for (p = s3.begin(); p != s3.end(); p++) {
		cout << char(*p) << ' ';
		cout << endl;
	}
}

// f o