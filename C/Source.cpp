#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int test_1() {

	int a = 15, b = 10, *q = &b;
	*q *= a%b ? b / 3 : a - b;
	return b; // 30
}
int test_2() {

	unsigned chs1 = 0x3a7, cp = chs1, knz = 0;
	while (cp) {
		knz += cp & 1;
		cp >>= 1;
	}
	return knz;
}
int test_3() {

	double u = 4.85;
	unsigned k = 7;
	printf("3) \n%3u", (k + (int) u * 3) >> 2);
	return 1;
}

int test_4() {

	short  int b = 7, d = 8, *v = &d;

	if (b % 5 == 2)
		if (++b<*v)
			b += 2;
		else b = *v / 3;
	else b--;

	return b;
}

int test_5() {

	unsigned dr = 14;
	switch (dr % 5) {
	case 4: case 5: dr /= 3;
	case 2: case 3: dr--;
		break;
	case 1: dr = 10; break;
	default: dr = 0;
	}

	return dr;
}

int test_6() {

	long n1 = 1, n2 = 2, nf, k = 3, hg = 54;

	do {
		k++;
		nf = n1 + n2;
		n1 = n2;
		n2 = nf;
	} while (nf <= hg);

	return k;
}

int test_7() {

	unsigned long mln = 287333, cp = mln;
	int zc = 2, npos = 1;

	while (cp % 10 != zc) {
		if ((cp /= 10) > 0)
			npos++;
		else {
			npos = 0;
			break;
		}
	}
	return npos;
}

int test_8() {

	unsigned ar[15] = { 3,5,0,7,1,7,4,2 }, kel = 8, *m = ar,
		*q = ar;
	printf("8) ");
	while (++q< ar + kel)
		if (*m <= *q) {
			m = q;
		}
	printf("%d", m - ar);
	return 0;
}

int test_9() {

	int vec [] = { 8,3,5,13,1 }, *pv = vec + 3;

	printf("\n9) ");

	char* answer;

	printf("%d %d %d %d %d %d",
		vec[3] == 5 ? 1 : 0,
		*(pv - 1) == 5 ? 1 : 0,
		*pv % 8 == 5 ? 1 : 0,
		*(vec + 1) + 2 == 5 ? 1 : 0,
		*pv - 1 == 5 ? 1 : 0,
		sizeof(vec) == 5 ? 1 : 0
	);
	return 0;
}

int test_10() {

	double mat[6][10];
	mat[1][0] = 1;
	printf("\n10) ");
	/*if (&*mat == 1) {
		printf("A)");
	}
	if (&mat[2][1] == 1) {
		printf("Б)");
	}
	if (&mat[1] == 1) {
		printf("В)");
	}
	if (&*mat[2] == 1) {
		printf("Г)");
	}
	if (&mat[2][1] == 1) {
		printf("Д)");
	}
	printf("its B) obviously=)");
	*/
	return 0;
}

int test_11() {

	char code[15] = "K3d12x5", *v1, *v2;
	int dc;

	v1 = v2 = code;
	do v2++;
	while (*v2);
	for (--v2; v1 < v2; v1++, v2--) {
		dc = *v2;
		*v2 = *v1;
		*v1 = dc;
	}
	return code[3];
}

int test_12() {

	char *zkd[5];

	zkd[0] = "QWERTY";
	zkd[1] = "1A2B31CD";
	zkd[2] = "ZA2ZBDZ2";
	zkd[3] = "A2bc4aD";
	zkd[4] = "Krtk419";

	int i;
	for (i = 0; i < 5; i++) {
		int n = 0;
		char *p = zkd[i] + 1;
		while (*p != *zkd[i] && *p) {
			++p;
		}
		if (*p != 0) n = p - zkd[i];
		if (n == 3)  return i + 1;;
	}
	return 0;
}

int test_13() {

	char rad[20] = "A28R12QA815R", *p, *q;
	for (p = rad; *p != 0; ++p) {
		q = p;
		if (*q == '*') continue;
		while (*++q != 0) {
			if (*q == *p)
				*p = '*';
		}
	}
	printf("\n13) ");
	puts(rad);
	return 0;
}

int test_14() {

	char cd [] = "123qrt41-k77", *qs = cd, *r;
	while (isdigit(*qs)) {
		++qs;
	}
	r = qs;
	do {
		if (!isalpha(*r)) *qs++ = *r;
	} while (*r++ != '\0');
	printf("14) ");
	puts(cd);
	return 0;
}

int test_15() {

	struct week_result {
		char wday[10];
		unsigned dr;
	} res [] = {
		"понеділок",20,
		"вівторок", 30,
		"середа",20,
		"четвер",25,
		"п\'ятниця", 22
	}, *p = res;
	char *zday = "четвер";
	int totr = res[0].dr;
	do {
		p++;
		totr += p->dr;

	} while (strcmp(p->wday, "четве"));
	printf("15) %d", totr);
	return 0;
}

void SR(int *n1, int *n2) {
	int z = *n1;
	*n1 += *n2;
	*n2 = z > *n2 ? z - *n2 : *n2 - z;

}
int test_16() {

	int c = 8, d = 10;
	SR(&c, &d);
	printf("\n16) %d", d);
	return 0;
}


int test_17() {
	int bal;
	char st[200];
	double  z;
	scanf("%s%d%lf", st, &bal, &z);
	printf("\n17) Б) 2,3 Підтверджено експериментально ", st, bal, z);
	return 0;
}

int test_18() {
	struct test {
		unsigned index;
		char titl[20];
	} mag = { 9208, "Світ подорожей" }, *q = &mag;

	printf("\n18) A) %d Б) %d В) %d Г) %d ", mag.index % 10>5, strcmp(q->titl, "Вокруг света") == 0,
		sizeof(mag)>20, isspace(mag.titl[4]));
	printf("\nНасправді неправилне тільки Б), довбана сішка ))");
	return 0;
}

int test_19() {
	union test {
		long a;
		unsigned short mus[2];
	} tst = { 0x13002c };
	printf("\n19) %u", *tst.mus);
	return 0;

}

int main() {

	printf("1) %d \n", test_1());
	printf("2) %d \n", test_2());
	test_3();
	printf("\n4) %d \n", test_4());
	printf("5) %d \n", test_5());
	printf("6) %d \n", test_6());
	printf("7) %d \n", test_7());
	test_8();
	test_9();
	test_10();
	printf("\n11) string \`%c\` \n", test_11());
	printf("\n12) %d", test_12());
	test_13();
	test_14();
	test_15();
	test_16();
	test_17();
	test_18();
	test_19();
}

