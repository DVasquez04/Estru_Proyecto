#pragma once
#include "TDAPila.h"
class LinkedStack :
	public TDAPila
{
public:
	Nodo* topNode;
	LinkedStack();
	virtual void push(Dato*) override;
	virtual Dato* pop() override;
	virtual Dato* top() override;
	virtual bool isEmpty() override;
	virtual void clear() override;
	virtual void print() override;
	~LinkedStack();
};