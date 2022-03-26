#pragma once
#include "ClassA.h"
#include <stdlib.h>
class Baseline
{
	ClassA** vectorDate;
	int currentIndex;
	int maxIndex;
public:
	Baseline();
	bool AddClass(ClassA* pointerClassA);
	void printClassesData();
};

