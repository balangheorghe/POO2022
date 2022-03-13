#pragma once
class Class
{
	int* vector;
public:
	//voi face doar partea de generare, alocarea de memorie si scrierea efectiva ca si elemente din vector o faceti voi
	//aveti exemple in laboratoarele anterioare
	Class(int numar_elemente, int min_element, int max_element);
	Class(int* vector, int numar_elemente);
	Class();
	Class(int count, ...);
	Class(char* c);
};

