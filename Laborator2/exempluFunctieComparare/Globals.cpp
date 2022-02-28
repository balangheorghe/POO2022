#include "Globals.h"

//daca avem *, folosim ->
//daca avem normal, folosim .

int MyCompare(MyClass * obiectul1, MyClass * obiectul2) {
	if (obiectul1->GetAge() < obiectul2->GetAge())
		return -1;
	if (obiectul1->GetAge() == obiectul2->GetAge())
		return 0;
	if (obiectul1->GetAge() > obiectul2->GetAge())
		return 1;
}