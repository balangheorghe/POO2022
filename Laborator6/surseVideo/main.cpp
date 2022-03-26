#include "ClassAB.h"
#include "ClassAC.h"
#include "Baseline.h"

int main() {
	ClassAC classAC1;
	ClassAB classAB1;
	ClassAC* classAC2 = new ClassAC();
	ClassAC classAC3;
	ClassAB* classAB2 = new ClassAB();
	Baseline baseline;
	printf("------------------------------------------------------\n");
	baseline.AddClass(&classAC1);
	baseline.AddClass(new ClassAC()); //se va afisa doar utilizarea constructorului default
	baseline.AddClass(&classAB1);
	printf("------------------------------------------------------\n");
	baseline.printClassesData();//aici se vor afisa primele 3 clase
	printf("------------------------------------------------------\n");
	baseline.AddClass(classAB2);
	baseline.AddClass(classAC2); //nu se va afisa nimic
	baseline.AddClass(&classAC3);
	printf("------------------------------------------------------\n");
	baseline.printClassesData(); //aici se vor afisa toate cele 6 clase adaugate
	printf("------------------------------------------------------\n");
	delete classAC2;
	delete classAB2;
	system("pause");
	//dupa sistem pause se vede ordinea de call a destructorilor
	return 0;
}