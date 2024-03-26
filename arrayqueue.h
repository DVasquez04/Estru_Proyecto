#pragma once
#include "alumno.h"
#include "TDACola.h"
#include <iostream>

class ArrayQueue:public TDACola {
private:
    int capacidad;
    int size;
    int primero;
    int ultimo;
    Alumno** array;

public:
    ArrayQueue(int capacidad);
    virtual void Queue(Dato*) override;
    virtual Dato* Dequeue() override;
    virtual Dato* Peek() override;
    virtual void Print() override;
    virtual void Delete() override;

    /*ArrayQueue(int capacidad);
    void enqueue(Alumno* alumno);
    Alumno* dequeue();
    Alumno* peek();
    bool isEmpty();
    void print();
    void clear();
    int getSize();
    bool isFull();
    ~ArrayQueue();*/
};
