#pragma once
#include <iostream>
#include <string>
using namespace std;
class Dato{
public:
	//retorna una cadena en representacion del dato
	virtual string toString() = 0;
	//recibe un puntero a un dato y lo compara con el dato actual. de ser iguales, retorna true.
	virtual bool equals(Dato*) = 0;
	//copia los elementos de un dato en otro
	virtual Dato* copy() = 0;

};

