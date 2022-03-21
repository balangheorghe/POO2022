#include "Exemple.h"

Exemple Get(Exemple ex) { return ex; }

int main() {
	printf("1.-------------------------------\n");
	Exemple ex1;
	Exemple ex2;

	printf("2.-------------------------------\n");
	ex1 = Exemple(5); //move asignment operator
	ex2 = Exemple(8);

	printf("3.-------------------------------\n");
	Exemple ex3 = ex1; //apel pentru copy constructor
	Exemple ex4 = Get(Exemple()); //default constructor pentru exemple(), move constructor pentru ex4

	printf("4.-------------------------------\n");
	ex4 = ex1 + ex2;
	printf("ex1 - 10: %d\n", ex1 - 10);

	printf("5.-------------------------------\n");
	ex4 = ex1 - ex2 + ex3;

	printf("6.-------------------------------\n");
	++ex1;
	ex1++;
	--ex2;
	ex2--;

	printf("7.-------------------------------\n");
	if (ex1 > ex2) printf("Ex1\n");
	if (ex1 < ex2) printf("Ex2\n");
	
	printf("8.-------------------------------\n");
	ex1 < 5;
	ex1 == 6;
	ex2 == 7;
	ex2 < 8;

	printf("9.-------------------------------\n");
	int a = ex1[1] + ex2[1];
	printf("a value = %d\n", a);

	printf("10.------------------------------\n");
	bool x = !ex2;
	printf("x value = %d\n", x);

	return 0;
}