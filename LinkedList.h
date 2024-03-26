#pragma once
#include "TDALista.h"
#include "Nodo.h"
class LinkedList :public TDALista
{
public:
	Nodo* nodo;
	LinkedList();
	~LinkedList();
	virtual bool inserta(Dato*, int) override;
	virtual bool suprime(int) override;
	virtual Dato* siguiente(int) override;
	virtual Dato* anterior(int) override;
	virtual void anula() override;
	virtual int localiza(Dato*) override;
	virtual Dato* recupera(int) override;
	virtual void imprime() override;
	Dato* primero();
};