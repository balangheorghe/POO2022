#include "MyClass.h"
#include <stdio.h>

//pentru implementari metode
//<tip_return> <nume_clasa>::<nume_functie>(<paramateri functie>) { <implementare> };

void MyClass::SetAge(int my_age) {
	//accesam atributele clasei cu this->
	this->age = my_age;
}

int MyClass::GetAge() {
	return this->age;
}

//pentru implementari constructor //destructor

MyClass::MyClass() {
	printf("S-a apelat constructorul pentru obiectul meu\n");
	this->age = 0;
}

MyClass::~MyClass() {
	printf("S-a apelat destructorul\n");
}


