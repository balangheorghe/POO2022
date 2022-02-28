#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "FirstClass.h"
using namespace std;

int main()
{
	FirstClass f1;
	FirstClass f2;
	FirstClass f3;

	f1.setNota(5);
	f1.setNume((char*)"Student1");
	f2.setNota(7);
	f2.setNume((char*)"Student2");
	f3.setNota(10);
	f3.setNume((char*)"Student3");

	printf("F1| nume: %s | nota: %d\n", f1.getNume(), f1.getNota());
	printf("F2| nume: %s | nota: %d\n", f2.getNume(), f2.getNota());
	printf("F3| nume: %s | nota: %d\n", f3.getNume(), f3.getNota());

	FirstClass f4;
	printf("F4| nume: %s | nota: %d\n", f4.getNume(), f4.getNota());

	FirstClass f5((char*)"Student5", 25);
	printf("F5 | nume: %s | nota: %d\n", f5.getNume(), f5.getNota());

	f5.setNota(10);
	printf("F5 | nume: %s | nota: %d\n", f5.getNume(), f5.getNota());

	f5.setNota(15);
	printf("F5 | nume: %s | nota: %d\n", f5.getNume(), f5.getNota());

	f5.setNume((char*)"Nume student 5");
	printf("F5 | nume: %s | nota: %d\n", f5.getNume(), f5.getNota());

	system("pause");
	return 0;
}