//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	//Exemplificare printf
	printf("-----------------[EXEMPLU CU PRINTF]------------------------\n");
	int a = 123;
	printf("Valoare lui a este: %d\n", a);
	char c = 123;
	printf("Valoarea lui c (char) este: %c\n", c);
	printf("Valoarea numerica a lui c este: %d\n", c);
	char sir[20] = "ana are mere\0";
	printf("Sirul meu are valoarea: %s\n", sir);
	printf("-----------------------------------------------------");
	printf("\n\n");


	printf("-----------------[EXEMPLU PROBLEMA 1]------------------------\n");
	FILE* fp;
	if (fopen_s(&fp, "in.txt", "r") != 0)
	{
		printf("Eroare. Nu am putut deschide fisierul\n");
	}
	else {
		printf("Am deschis fisierul cu success!\n");
		char myString[200];
		/*
		if (fgets(myString, 200, fp))
		{
			printf("Am citit din fisier: %s\n", myString);
		}
		*/
		while (fgets(myString, 200, fp))
		{
			myString[strlen(myString) - 1] = '\0';
			printf("Am citit din fisier: %s\n", myString);
		}
	}
	printf("-----------------------------------------------------");
	printf("\n\n");

	printf("-----------------[EXEMPLU PROBLEMA 2]------------------------\n");
	printf("Introduceti numarul de cuvinte din propozitie: ");
	int numarCuvinte;
	scanf_s("%d", &numarCuvinte, 4);
	printf("Introduceti o propozitie: ");
	char cuvant[20];
	//scanf("%19s", cuvant);
	int counter = 0;
	while (scanf_s("%19s", cuvant, 19))
	{
		//if (strcmp(cuvant, "\n\n") == 0)
		//	break;
		printf("Cuvantul citit este: %s\n", cuvant);
		counter += 1;
		if (counter >= numarCuvinte)
			break;
	}
	printf("-----------------------------------------------------");
	printf("\n\n");

	system("pause");
	return 0;
}