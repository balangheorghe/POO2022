#pragma once
#include <stdio.h>

enum Object {
	OBJ1,
	OBJ2, 
	OBJ3
};


class ClassA
{
protected:
	ClassA();
	~ClassA();
public:
	virtual void printData() = 0;
};

