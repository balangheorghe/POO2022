#pragma once
class Example
{
	int* vector;
	int MaxNumberOfElements;
	int NumberOfElements;
	char* name;
public:
	Example(); //acesta seteaza vector si name nullptr, maxnumberofelements si numberofelements 0
	Example(int maxNumber); //va face MaxNumberOfElements - maxNumber, va aloca memoria necesara pentru un vector cu elemente de tipul int si cu size MaxNumberOfElements, iar pentru name max 256;
	~Example(); //va face free la memoria alocata

	void AddNumber(int number);
	void AddMultipleNumbers(int number1, int number2);
	void AddMultipleNumbers(int number1, int number2, int number3);
	void AddVariadicNumbers(int count, ...);
	char* SetToName(const char* sir1, const char* sir2, const char* sir3);
	void PrintAll();
};

