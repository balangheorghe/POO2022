#include "FirstClass.h"
#include <string.h>
#include <stdio.h>
//aici vom implementa metodele din clasa
//ca sa implementam o metoda din clasa 
//<tipuldereturn> <nume_clasa>::<nume_metoda> (<parametri deca sunt>) {<implementarea>}
//ca sa accesam atribute ale clasei folosim this->

//constructorul si destructorul nu au valori de return

void FirstClass::setNota(int input) {
	printf("am apelat methoda setNota\n");
	this->nota = input;
}

int FirstClass::getNota() {
	printf("am apelat methoda getNota\n");
	return this->nota;
}

void FirstClass::setNume(char* nume) {
	printf("am apelat methoda setNume\n");
	strcpy_s(this->nume, 20, nume);
}

char* FirstClass::getNume() {
	printf("am apelat methoda getNume\n");
	return this->nume;
}

FirstClass::FirstClass()
{
	printf("am apelat constructorul implicit\n");
	this->nota = 0;
	memset(this->nume, 0, 20);
}

FirstClass::FirstClass(char* nume, int nota)
{
	printf("am apelat constructorul cu parametrul nume si nota\n");
	strcpy_s(this->nume, 20, nume);
	this->nota = nota;
}


FirstClass::~FirstClass()
{
	printf("am apelat destructorul\n");
	this->nota = 0;
	memset(this->nume, 0, 20);
}

