#include "MyFirstClass.h"

void MyFirstClass::SetNumber(int number)
{
    this->number = number;
}

int MyFirstClass::GetNumber()
{
    return this->number;
}

void MyFirstClass::SetExemplu(int exemplu)
{
    this->exemplu = exemplu;
}

int MyFirstClass::GetExemplu()
{
    return this->exemplu;
}

void MyFirstClass::SetSir(const char* inputSir, int inputSirSize)
{
    //malloc
    this->sirDeCaracter = new char[inputSirSize + 1];
    memcpy(this->sirDeCaracter, inputSir, inputSirSize);
    this->sirDeCaracter[inputSirSize] = '\0';
}

const char* MyFirstClass::GetSir()
{
    return this->sirDeCaracter;
}