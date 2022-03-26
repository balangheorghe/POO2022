#pragma once
/*
Because the substitution is made during precompilation, the
templates must be stored in the files that are exported from a library(files.h)
otherwise the compiler(in case it is tried the creation of a class from a
	template exported from a library) will not be able to do this.*/
template<typename T>
int functieDeComparare1(T a, T b)
{
	return a - b;
}

template<typename T>
int functieDeComparare2(T a, T b)
{
	return a + b;
}

template<typename T>
T gigiCallback(T a, T b) {
	return a + b + 2 * a - 3 * b;
}


template <class T>
class ExempluTemplate {
	T variabila1;
	T variabila2;
public:
	void setVariabila1(T myVar) {
		this->variabila1 = myVar;
	}
	void setVariabila2(T myVar) {
		this->variabila2 = myVar;
	}
	T getVariabila1() {
		return this->variabila1;
	}
	T getVariabile2() {
		return this->variabila2;
	}
	int decizie(int (*callback)(T, T)) {
		if (callback != nullptr) {
			return callback(this->variabila1, this->variabila2);
		}
		return this->variabila1 < this->variabila2;
	}
	T specialCallback(T(*callback)(T, T)) {
		if (callback == nullptr)
			return 0;
		return callback(this->variabila1, this->variabila2);
	}
};