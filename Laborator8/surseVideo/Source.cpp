#include <fstream>
#include <string>
#include <map>
#include <queue>
using namespace std;

class Compare {
public:
	bool operator() (pair<char, int> p1, pair<char, int> p2) {
		if (p1.second < p2.second)
			return true;
		if (p1.second > p2.second)
			return false;
		if (p1.first < p2.first)
			return false;
		return true;
	}
};

int main() {
	string myString;
	ifstream myFile("input.txt");
	if (!myFile)
	{
		printf("error la deschiderea fisierului: input.txt");
		return 0;
	}
	//citim prima linie din fisier
	if (!getline(myFile, myString)) {
		printf("error la citirea din fisier: input.txt");
		return 0;
	}
	map<char, int> myMap;
	printf("Sirul de caractere citit este: %s\n", myString.c_str());
	/*
	//V1
	string::iterator stringIt;
	printf("Parcurg caracter cu caracter si numar intr-un map cate caractere am gasit\n");
	for (stringIt = myString.begin(); stringIt != myString.end(); stringIt++) {
		if (myMap.count(*stringIt) != 0) {
			myMap[*stringIt] += 1;
		}
		else {
			myMap[*stringIt] = 1;
		}
	}
	*/
	//V2
	for (int i = 0; i < myString.size(); i++) {
		if (myMap.count(myString[i]) != 0) {
			myMap[myString[i]] += 1;
		}
		else {
			myMap[myString[i]] = 1;
		}
	}
	/*
	//V1
	map<char, int>::iterator mapIterator;
	for (mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++) {
		printf("caracterul: %c apare de %d ori\n", mapIterator->first, mapIterator->second);
	}
	*/
	//V2
	for (auto mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++) {
		printf("caracterul: %c apare de %d ori\n", mapIterator->first, mapIterator->second);
	}
	priority_queue<pair<char, int>, vector<pair<char, int>>, Compare> myQueue;
	for (auto mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++) {
		myQueue.push(pair<char, int>(mapIterator->first, mapIterator->second));
	}
	printf("\n\nSortate\n");
	//Golim coada
	while (!myQueue.empty())
	{
		/*
		//V1
		pair<char, int> popValue = myQueue.top();
		printf("%c | %d\n", popValue.first, popValue.second);
		*/
		//V2
		printf("%c | %d\n", myQueue.top().first, myQueue.top().second);
		myQueue.pop();
	}
};