#include "Example.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

Example::Example() {
	this->vector = nullptr;
	this->name = nullptr;
	this->MaxNumberOfElements = 0;
	this->NumberOfElements = 0;
}

Example::Example(int maxNumber) {
	this->NumberOfElements = 0;
	this->MaxNumberOfElements = maxNumber;
	//malloc https://www.cplusplus.com/reference/cstdlib/malloc/
	//malloc (number_of_elements * sizeof(tip_element))
	//ex: int * => (number_of_elements * sizeof(int))
	//ex: char * => (number_of_elements * sizeof(char))
	//ex: char ** => (number_of_elements * sizeof(char*))
	//this->vector = (int*)malloc(this->MaxNumberOfElements * sizeof(int));
	this->vector = new int[this->MaxNumberOfElements];
	//this->name = (char*)malloc(256 * sizeof(char));
	this->name = new char[256];
}

Example::~Example() {
	//if (this->vector != nullptr)
	//	free(this->vector);
	//if (this->name != nullptr)
	//	free(this->name);
	delete this->vector;
	delete this->name;
}

void Example::AddNumber(int number) {
	if (this->NumberOfElements < this->MaxNumberOfElements && this->vector != nullptr)
		this->vector[this->NumberOfElements++] = number;
}

void Example::AddMultipleNumbers(int number1, int number2) {
	if (this->NumberOfElements + 2 < this->MaxNumberOfElements && this->vector != nullptr) {
		this->vector[this->NumberOfElements++] = number1;
		this->vector[this->NumberOfElements++] = number2;
	}
}

void Example::AddMultipleNumbers(int number1, int number2, int number3) {
	if (this->NumberOfElements + 3 < this->MaxNumberOfElements && this->vector != nullptr) {
		this->vector[this->NumberOfElements++] = number1;
		this->vector[this->NumberOfElements++] = number2;
		this->vector[this->NumberOfElements++] = number3;
	}
}

void Example::AddVariadicNumbers(int count, ...) {
	//https://www.cplusplus.com/reference/cstdarg/va_start/ <- va_start
	/*
	va_list vl; <- facem o variabila de tipul va_list
	va_start(vl, n); <- va_start primeste variabila si n, numarul de elemente
	for (i = 0; i < n; i++)
	{
		val = va_arg(vl, double); <- va_arg primeste variabila si tipul elementului
		printf(" [%.2f]", val);
	}
	va_end(vl); <- in mod obligatoriu va_end
	*/
	if (this->NumberOfElements + count < this->MaxNumberOfElements && this->vector != nullptr)
	{
		va_list vl;
		va_start(vl, count);
		for (int i = 0; i < count; i++) {
			this->vector[this->NumberOfElements++] = va_arg(vl, int);
		}
	}

}

char* Example::SetToName(const char* sir1, const char* sir2, const char* sir3) {
	if (sir1 == nullptr or sir2 == nullptr or sir3 == nullptr)
		return nullptr;
	int sizeToRealloc;
	sizeToRealloc = strlen(sir1) + strlen(sir2) + strlen(sir3) + 1;
	//realocare
	if (this->name == nullptr)
	{
		this->name = (char*)malloc(sizeToRealloc);
		//memset http://www.cplusplus.com/reference/cstring/memset/
		memset(this->name, 0, sizeToRealloc);
		if (this->name != nullptr) {
			//memcpy: http://www.cplusplus.com/reference/cstring/memcpy/
			memcpy(this->name, sir1, strlen(sir1));
			memcpy(this->name + strlen(sir1), sir2, strlen(sir2));
			memcpy(this->name + strlen(sir1) + strlen(sir2), sir3, strlen(sir3));
		}

	}
	else {
		//realloc http://www.cplusplus.com/reference/cstdlib/realloc/
		this->name = (char*)realloc(this->name, sizeToRealloc);
		//memset http://www.cplusplus.com/reference/cstring/memset/
		memset(this->name, 0, sizeToRealloc);
		if (this->name != nullptr) {
			//memcpy: http://www.cplusplus.com/reference/cstring/memcpy/
			memcpy(this->name, sir1, strlen(sir1));
			memcpy(this->name + strlen(sir1), sir2, strlen(sir2));
			memcpy(this->name + strlen(sir1) + strlen(sir2), sir3, strlen(sir3));
		}
	}
}

void Example::PrintAll() {
	if (this->vector != nullptr) {
		printf("Numar maxim de elemente: %d\n", this->MaxNumberOfElements);
		printf("Numar curent de elemente: %d\n", this->NumberOfElements);
		for (int i = 0; i < this->NumberOfElements; i++) {
			printf("%d ", this->vector[i]);
		}
		printf("\n");
	}
	else {
		printf("Vector este nullptr\n");
	}

	if (this->name != nullptr) {
		printf("Numele este: %s\n", this->name);
	}
	else {
		printf("Name este nullptr\n");
	}

}
