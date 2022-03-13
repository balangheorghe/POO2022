#include "Class.h"
#include <stdlib.h>

int main() {
	Class c1(10, 10, 100);
	int v[5] = { 1, 2, 3, 4, 5 };
	Class c2(v, 5);
	Class c3(6, 1, 2, 3, 4, 5, 6);
	char c[] = "12,34,56,78";
	Class c4(c);
	Class c5();
	system("pause");
	return 0;
}