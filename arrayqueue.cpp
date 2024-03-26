// arrayqueue.cpp
#include "arrayqueue.h"

ArrayQueue::ArrayQueue(int capacidad) {
    this->capacidad = capacidad;
    size = 0;
    primero = 0;
    ultimo = -1;
    array = new Alumno * [capacidad];
}

void ArrayQueue::Queue(Dato* alumno) {
    if (isFull()) {
        cout << "Cola llena" << endl;
        return;
    }
    ultimo = (ultimo + 1) % capacidad;
    array[ultimo] = alumno;
    size++;
}

Alumno* ArrayQueue::Dequeue(Alumno alumno) {
    if (isEmpty()) {
        cout << "Cola vacia" << endl;
        return nullptr;
    }
    alumno = array[primero];
    primero = (primero + 1) % capacidad;
    size--;
    return alumno;
}

Alumno* ArrayQueue::Peek() {
    if (isEmpty()) {
        cout << "Cola vacia" << endl;
        return nullptr;
    }
    return array[primero];
}

bool ArrayQueue::isEmpty() {
    return size == 0;
}

void ArrayQueue::Print() {
    if (isEmpty()) {
        cout << "Cola vacia" << endl;
        return;
    }
    cout << "Cola:" << endl;
    int dedito = primero;
    //Le puse dedito a la variable, por que es el indice/i (asi se llama un dedo)
    for (int i = 0; i < size; ++i) {
        cout << array[dedito]->getNombre() << " - " << array[dedito]->getNumeroCuenta() << endl;
        dedito = (dedito + 1) % capacidad;
    }
}

void ArrayQueue::Delete() {
    while (!isEmpty()) {
        delete dequeue();
    }
}

bool ArrayQueue::isFull() {
    return size == capacidad;
}

int ArrayQueue::getSize() {
    return size;
}

ArrayQueue::~ArrayQueue() {
    clear();
    delete[] array;
}