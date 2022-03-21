#include "Exemple.h"

//exemple sunt random, puteti scrie orice vreti pentru acesti operatori
Exemple::Exemple() {
	printf("Default constructor\n");
}
Exemple::Exemple(int exemplu) {
	printf("Constructorul cu un singur parametru!\n");
	this->exemplu1 = exemplu;
}

Exemple::Exemple(const Exemple& ex) {
	printf("Copy constructor\n");
	this->exemplu1 = ex.exemplu1;
}
Exemple::Exemple(const Exemple&& ex) {
	printf("Move constructor\n");
	this->exemplu1 = ex.exemplu1;
}
Exemple Exemple::operator+(Exemple ex) {
	printf("Operatorul + apelat in format operator+(Exemple ex)\n");
	return Exemple(this->exemplu1 + ex.exemplu1);
}
Exemple Exemple::operator+(int numar) {
	printf("Operatorul + apelat in format operator+(int numar)\n");
	return Exemple(this->exemplu1 + numar);
}
Exemple Exemple::operator-(Exemple ex) {
	printf("Operatorul - apelat in format operator-(Exemple ex)\n");
	return Exemple(this->exemplu1-ex.exemplu1);
}

void Exemple::operator++() {
	printf("Operatorul ++ apelat in format prefixat\n");
	this->exemplu1 *=10; 
}
void Exemple::operator++(int numar) {
	printf("Operatorul ++ apelat in format postfixat\n");
	this->exemplu1 *= 100; 
}
void Exemple::operator--() {
	printf("Operatorul -- apelat in format prefixat\n");
	this->exemplu1 /= 10;
}
void Exemple::operator--(int numar) {
	printf("Operatorul -- apelat in format postfixat\n");
	this->exemplu1 /= 100;
}
bool Exemple::operator!() {
	printf("Operatorul !\n");
	return 0;
}
int Exemple::operator[](int index) {
	printf("Operatorul de indexare\n");
	this->exemplu1 += index;
	return this->exemplu1;
}
Exemple& Exemple::operator=(Exemple&& ex) {
	printf("Move assignment operator\n");
	this->exemplu1 = ex.exemplu1;
	return *this;
}
bool Exemple::operator<(Exemple ex) {
	printf("Operatorul < cu parametru Exemple\n");
	return true;
}
bool Exemple::operator>(Exemple ex) {
	printf("Operatorul > cu parametru Exemple\n");
	return true;
}
bool Exemple::operator<=(Exemple ex) {
	printf("Operatorul <= cu parametru Exemple\n");
	return true;
}
bool Exemple::operator>=(Exemple ex) {
	printf("Operatorul >= cu parametru Exemple\n");
	return true;
}
bool Exemple::operator==(Exemple ex) {
	printf("Operatorul == cu parametru Exemple\n");
	return true;
}
bool Exemple::operator<(int numar) {
	printf("Operatorul < cu parametru int\n");
	return true;
}
bool Exemple::operator>(int numar) {
	printf("Operatorul > cu parametru int\n");
	return true;
}
bool Exemple::operator<=(int numar) {
	printf("Operatorul <= cu parametru int\n");
	return true;
}
bool Exemple::operator>=(int numar) {
	printf("Operatorul >= cu parametru int\n");
	return true;
}
bool Exemple::operator==(int numar) {
	printf("Operatorul == cu parametru int\n");
	return true;
}

int operator-(Exemple ex, int numar) {
	printf("Sunt in functia operator- care va fi utilizata ca si friend\n");
	return ex.exemplu1 - numar;
}