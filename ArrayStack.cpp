#include "ArrayStack.h"
ArrayStack::ArrayStack() {
	capacidad = 100;
	array = new Dato * [capacidad];
	size = 0;
}

void ArrayStack::push(Dato* obj) {
	if (size + 1 > capacidad) resize();
	array[size] = obj;
	size++;
}

Dato* ArrayStack::top() {
	if (size) return array[size - 1];
	return NULL;
}

Dato* ArrayStack::pop() {
	if (size) {
		size--;
		Dato* retorno = array[size];
		array[size] = NULL;
		return retorno;
	}
	else {
		return NULL;
	}
}

bool ArrayStack::isEmpty() {
	if (!size)return true;
	return false;
}

void ArrayStack::print() {
	for (int i = size - 1; i >= 0; i--) cout << "[" + array[i]->toString() + "]\n";
	cout << "\n";
}

void ArrayStack::resize() {
	capacidad += 100;
	Dato** newArray = new Dato * [capacidad];
	for (int i = 0; i < size; i++) {
		newArray[i] = array[i];
	}
	delete[] array;
	array = newArray;
}
void ArrayStack::clear() {
	for (int i = 0; i < size; i++) delete array[i];
	delete[] array;
	size = 0;
}

ArrayStack::~ArrayStack() {
	for (int i = 0; i < size; i++) delete array[i];
	delete[] array;
}
