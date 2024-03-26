#pragma once
#include "Dato.h"
class TDAListaArraylist
{
protected:
	int size;
public:
	virtual bool inserta(Dato*, int) = 0;
	virtual bool suprime(int) = 0;
	virtual Dato* siguiente(int) = 0;
	virtual Dato* anterior(int) = 0;
	virtual void anula() = 0;
	virtual int localiza(Dato*) = 0;
	virtual Dato* recupera(int) = 0;
	int getSize();
	bool isEmpty() {
		if (size == 0)
		{
			return true;
		}
		else {
			return false;
		}
	};
	virtual void imprime() = 0;
	virtual void resize() = 0;
};