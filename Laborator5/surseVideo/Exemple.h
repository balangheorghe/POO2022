#pragma once
#include <stdio.h>
class Exemple
{
	int exemplu1;
public:
	Exemple(); //default constructor
	Exemple(int ex);
	Exemple(const Exemple& ex); //copy constructor
	Exemple(const Exemple&& ex); //move constructor

	//cum suprascriu un operator?
	//<tip_de_return> operator<operator> (<parametri>)
	//tip de return in functie de ceea ce ne dorim noi sa returneze

	Exemple operator+(Exemple ex);//adition
	Exemple operator+(int numar); //adition
	Exemple operator-(Exemple ex); //substract
	friend int operator-(Exemple ex, int numar); //substract
	

	void operator++(); //pentru ++exemple
	void operator++(int numar); //pentru exemple++
	void operator--(); //pentru --exemple
	void operator--(int numar); //pentru exemple--


	bool operator!();
	int operator[](int index); //index operator
	
	Exemple& operator=(Exemple&& ex); //move asignment operator
	

	bool operator<(Exemple ex);
	bool operator>(Exemple ex);
	bool operator<=(Exemple ex);
	bool operator>=(Exemple ex);
	bool operator==(Exemple ex);
	bool operator<(int numar);
	bool operator>(int numar);
	bool operator<=(int numar);
	bool operator>=(int numar);
	bool operator==(int numar);
};

