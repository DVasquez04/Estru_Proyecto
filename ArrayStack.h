#pragma once
#include "TDAPila.h"
class ArrayStack :
    public TDAPila
{
private:
    Dato** array;
    int capacidad;
    void resize();
public:
    ArrayStack();
    ~ArrayStack();
    virtual void push(Dato*) override;
    virtual Dato* pop() override;
    virtual Dato* top() override;
    virtual void clear() override;
    virtual bool isEmpty() override;
    virtual void print() override;
};

