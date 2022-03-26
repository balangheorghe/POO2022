#include <stdio.h>
#include <iostream>
#include "Templates.h"
using namespace std;
//Literals: https://drive.google.com/file/d/1mfBrLv5AGX7-6nDwlEmUo29s1eU585yR/view (incepand cu slide 82)
//atentie la tipul parametrului care poate fi doar: const char *, unsigned long long int, long double, char, wchar_t, char8_t, char16_t, char32_t
//nu uitat sa puneti si _

//Templates (acelasi curs de mai sus, imediat dupa Literals)

int operator"" _reverseNumber(unsigned long long int x) {
	int reversed = 0;
	while (x != 0) {
		reversed = reversed * 10 + x % 10;
		x = x / 10;
	}
	return reversed;
}


int anotherCallback(int a, int b) {
	return a * 2 + b * 3;
}

int main() {
	int reversedNumber = 123_reverseNumber;
	printf("Valoarea reversed este: %d\n", reversedNumber);
	
	
	ExempluTemplate<int> templateInt;
	ExempluTemplate<float> templateFloat;

	templateInt.setVariabila1(4.5);
	templateInt.setVariabila2(2.3);
	cout << "Variabilele sunt: " << templateInt.getVariabila1() << " " << templateInt.getVariabile2() << "\n";
	cout << "Decizia cu argument nullptr: " << templateInt.decizie(nullptr) << "\n";
	cout << "Decizia cu functieDeComparare1: " << templateInt.decizie(functieDeComparare1) << "\n";
	cout << "Decizia cu functieDeComparare2: " << templateInt.decizie(functieDeComparare2) << "\n";
	cout << "Gigi callback: " << templateInt.specialCallback(gigiCallback) << "\n";
	cout << "Another callbacK: " << templateInt.specialCallback(anotherCallback) << "\n";

	cout << "\n";

	templateFloat.setVariabila1(4.5);
	templateFloat.setVariabila2(2.3);
	cout << "Variabilele sunt: " << templateFloat.getVariabila1() << " " << templateFloat.getVariabile2() << "\n";
	cout << "Decizia cu argument nullptr: " << templateFloat.decizie(nullptr) << "\n";
	cout << "Decizia cu functieDeComparare1: " << templateFloat.decizie(functieDeComparare1) << "\n";
	cout << "Decizia cu functieDeComparare2: " << templateFloat.decizie(functieDeComparare2) << "\n";
	cout << "Gigi callback: " << templateFloat.specialCallback(gigiCallback) << "\n";

	return 0;
}