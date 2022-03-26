#include "ClassAB.h"
ClassAB::ClassAB() {
	printf("Am apelat constructorul default pentru ClassAB\n");
}

ClassAB::~ClassAB() {
	printf("Am apelat destructorul pentru ClassAB\n");
}

void ClassAB::printData() {
	printf("Am apelat functia printData din ClassAB\n");
}