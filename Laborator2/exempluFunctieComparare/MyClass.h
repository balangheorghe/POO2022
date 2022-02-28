#pragma once

//cum se declara o clasa: class <nume_clasa>

class MyClass
{
	//by default identificatorul de access este private
	//modificarea accesului se face utilizand: public:, private:, protected:

	//atribute
	int age;


	//metode
	//cum definim o metoda: <tip_return> <nume_metoda>(<parametri daca exista>);
public:
	//constructor: <nume_clasa>(<parametri_daca_vrem>); //fara parametri, constructorul implicit
	//destructor: ~<nume_clasa>(); //un destructor nu are parametri
	
	MyClass(); //<-this is the constructor
	~MyClass();

	//un setter va seta intotdeauna o valoarea din clasa
	void SetAge(int my_age);

	//un getter va lua o valoare
	int GetAge();
};

