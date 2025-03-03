//#include <iostream>
#include <stdio.h>
#include "MyFirstClass.h"
#include "functiiGlobale.h"
using namespace std;

int main()
{
    //char test[] = "1234";

    //for (int i = 0; i < 4; i++)
    //{
    //    printf("Acesta este un numar: %d; Aceste este numarul 2: %X\n", test[i] - '0', test[i] - '0');
    //}

    ////fopen("test.txt", "r");

    //printf("Acesta este un numar: %d; Aceste este numarul 2: %X\n", 23, 23);

    //cout << "Primul laborator OOP";

    MyFirstClass x;
    x.SetNumber(10);
    printf("x.number este %d \n", x.GetNumber());
    x.SetExemplu(20);
    printf("x.exemplu este %d \n", x.GetExemplu());
    x.SetSir("this is my second OOP lab", strlen("this is my second OOP lab"));
    printf("x.sirdecaractere: %s \n", x.GetSir());
    
    MyFirstClass x2;
    x2.SetNumber(10);
    //printf("Rezultatul functiei compareByNumber: %d \n", compareByNumber(x, x2));
    printf("Rezultatul functiei compareByNumber: %d \n", compareByNumber(&x, &x2));
   
    int v1 = 10;
    int v2 = 10;
    int v3 = 10;
    functionX1(v1);
    printf("%d \n", v1);
    functionX2(&v2);
    printf("%d \n", v2);
    functionX3(v3);
    printf("%d \n", v3);

    //printf("size-ul clasei: %d\n", sizeof(MyFirstClass));
    return 0;
}