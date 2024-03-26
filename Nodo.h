#pragma once
#include "Dato.h"
class Nodo
{
private:
	Nodo* anterior;
	Nodo* siguiente;
	Dato* nodeObj;
public:
	void setPrior(Nodo*);
	void setNext(Nodo*);
	Nodo* getNext();
	Nodo* getPrior();
	void setObj(Dato*);
	Dato* getObj();
	Nodo();
	Nodo(Dato*);
	~Nodo();
};
