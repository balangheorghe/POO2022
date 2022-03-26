#include "Baseline.h"

Baseline::Baseline() {
	this->maxIndex = 100;
	this->currentIndex = 0;
	this->vectorDate = (ClassA**)(malloc(this->maxIndex * sizeof(ClassA*)));
}

bool Baseline::AddClass(ClassA* myClass) {
	if (this->currentIndex < this->maxIndex) {
		this->vectorDate[this->currentIndex++] = myClass;
		return true;
	}
	return false;
}

void Baseline::printClassesData() {
	for (int i = 0; i < this->currentIndex; i++)
		this->vectorDate[i]->printData();
}