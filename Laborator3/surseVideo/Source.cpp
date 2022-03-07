#include "Example.h"
#include <stdlib.h>

int main()
{
	Example ex1;
	Example ex2(15);

	ex1.AddNumber(5);
	ex1.AddMultipleNumbers(6, 7);
	ex1.AddMultipleNumbers(6, 7, 8);
	ex1.AddVariadicNumbers(6, 1, 2, 3, 4, 5, 6);
	ex1.SetToName("a", "b", "c");
	ex1.PrintAll();

	ex2.AddNumber(5);
	ex2.AddMultipleNumbers(6, 7);
	ex2.AddMultipleNumbers(6, 7, 8);
	ex2.AddVariadicNumbers(6, 1, 2, 3, 4, 5, 6);
	ex2.SetToName("1", "2", "3");
	ex2.PrintAll();

	system("pause");
	return 0;
}