#pragma once
#include "Alumno.h"
class TDACola{
protected:
	int size;
public:
	TDACola();
	int getSize();
	virtual void Queue(Dato*)=0;
	virtual Dato* Dequeue()=0;
	virtual Dato* Peek()=0;
	bool isEmpty();
	virtual void Print()=0;
	virtual void Delete()=0;
};

