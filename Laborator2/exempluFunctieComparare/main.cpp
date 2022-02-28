#include "MyClass.h"
#include "Globals.h"
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	//instantiere <tipul_clasei> <nume_obiect>
	MyClass obiectulMeu;
	printf("Age initial: %d\n", obiectulMeu.GetAge());
	obiectulMeu.SetAge(25);
	printf("Age modificat: %d\n", obiectulMeu.GetAge());

	MyClass obiectulMeu2;
	obiectulMeu2.SetAge(25);

	printf("Valoarea comparatiei dintre varste este: %d\n", MyCompare(&obiectulMeu, &obiectulMeu2));

	system("pause");
	return 0;
}