#include "functiiGlobale.h"

//int compareByNumber(MyFirstClass obj1, MyFirstClass obj2)
//{
//    if (obj1.GetNumber() < obj2.GetNumber())
//        return -1;
//    if (obj1.GetNumber() == obj2.GetNumber())
//        return 0;
//    if (obj1.GetNumber() > obj2.GetNumber())
//        return 1;
//}

int compareByNumber(MyFirstClass * obj1, MyFirstClass * obj2)
{
    if (obj1->GetNumber() < obj2->GetNumber())
        return -1;
    if (obj1->GetNumber() == obj2->GetNumber())
        return 0;
    if (obj1->GetNumber() > obj2->GetNumber())
        return 1;
}

void functionX1(int v)
{
    v = 20;
}

void functionX2(int* v)
{
    *v = 20;
}

void functionX3(int& v)
{
    v = 20;
}