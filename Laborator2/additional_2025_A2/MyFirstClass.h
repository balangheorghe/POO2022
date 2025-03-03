#pragma once
#include <stdlib.h>
#include <string>

class MyFirstClass
{
    int number;
    int exemplu;
    char* sirDeCaracter;
    //char sirDeCaracter[200];
public:
    void SetSir(const char* inputSir, int inputSirSize);
    const char* GetSir();
    void SetNumber(int number);
    int GetNumber();
    void SetExemplu(int exemplu);
    int GetExemplu();
};

