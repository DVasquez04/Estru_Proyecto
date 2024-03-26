#pragma once
#include "Nodo.h"
#include "Dato.h"
class TDAPila {
public:
	int size = 0;
	virtual void push(Dato*) = 0;
	virtual Dato* pop() = 0;
	virtual Dato* top() = 0;
	virtual bool isEmpty() = 0;
	virtual void clear() = 0;
	virtual void print() = 0;
};

