#pragma once
class FirstClass
{
	//identificatori de access public, private sau protected
	//daca nu specificam nimic avem private
	//private - nu poate fi apelat / accesat decat din interiorul clasei curente
	//protected - nu poate fi apelat / accesat din exterior, dar poate fi apelat dintr-o clasa derivata
	//public - poate fi apelat / accesat de oriunde

	//identificatori de access atat pentru atribute cat si pentru metode

	//constructorul si destructorul nu au valori de return
private:
	int nota;
	char nume[20];
public:
	FirstClass();
	FirstClass(char* nume, int nota);
	~FirstClass();

	//setter pentru nota
	//1. valoarea de return a functiei este void, iar tipul parametrului functiei este tipul atributului
	void setNota(int input);
	//getter pentru nota
	//1. vedem de ce tip este atributul nota -> acesta va fi tipul de return al functiei, functia neavand parametri
	int getNota();

	//void setNume(char nume[20]);
	void setNume(char* nume);
	char* getNume();

	//!nu uitati de ; dupa fiecare definitie de functie
};

