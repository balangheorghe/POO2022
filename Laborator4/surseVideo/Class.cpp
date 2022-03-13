#include "Class.h"
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>


Class::Class(int numar_elemente, int min_element, int max_element) {
	//trebuie sa alocati memoria necesara

	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < numar_elemente; i++) {
		printf("Am generat elementul cu numarul %d: %d\n", i, min_element + rand() % (min_element - max_element + 1));
		//aici in loc de printf puneti elementele in vectorul alocat
	}
	
}


Class::Class(int* vector, int numar_elemente) {
	//alocati memoria
	for (int i = 0; i < numar_elemente; i++) {
		//aici in loc de printf puneti elementele in vectorul alocat
		printf("Elementul din vector cu numarul %d: %d\n", i, vector[i]);
	}
}

Class::Class(int count, ...) {
	//alocati memoria
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
	{
		//aici in loc de printf puneti elementele in vectorul alocat
		printf("Elementul din va_arg cu numarul %d: %d\n", i, va_arg(vl, int));
	}
	va_end(vl);
}

Class::Class(char* c) {
	printf("....\n");
	//parcurgem sirul si facem transformarile in numar
}

Class::Class(): vector(new int[6] {1, 2, 3, 4, 5, 6}) {
	//tot ce mai avem de facut este sa setam numarul de elemente din vector cum trebuie
}
